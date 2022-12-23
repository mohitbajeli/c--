#include<stdio.h>
    
int main()
{
    int m, n, position, k, l;
    printf("enter the no of pages\n");
    scanf("%d",&total_pages);
    int total_frames;
    printf("enter the total frames\n");
    scanf("%d",&total_frames);
    int a = 0, b = 0, page_fault = 0;
    
    int frames[total_frames];
    int temp[total_frames];
    int pages[total_pages];
    printf("enter the reference string\n");
    for(int i=0;i<total_pages;i++)
    {
        scanf("%d",&pages[i]);
    }
    

    for(m = 0; m < total_frames; m++){
            frames[m] = -1;
    }
    
    for(n = 0; n < total_pages; n++)  
    {
        printf("%d: ", pages[n]);
            a = 0, b = 0;
            for(m = 0; m < total_frames; m++)
            {
                if(frames[m] == pages[n])
                {
                        a = 1;
                        b = 1;
                        break;
                }
            }
            if(a == 0)
            {
                for(m = 0; m < total_frames; m++)
                {
                    if(frames[m] == -1)
                    {
                        frames[m] = pages[n];
                        b = 1;
                        page_fault++;
                        break;
                    }
                }
            }
            if(b == 0)
            {
                for(m = 0; m < total_frames; m++)
                {
                    temp[m] = 0;
                }
                for(k = n - 1, l = 1; l <= total_frames - 1; l++, k--)
                {
                    for(m = 0; m < total_frames; m++)
                    {
                        if(frames[m] == pages[k])
                        {
                            temp[m] = 1;
                        }
                    }
                }
                for(m = 0; m < total_frames; m++)
                {
                    if(temp[m] == 0)
                        position = m;
                }
                frames[position] = pages[n];
                page_fault++;
            }
            
            for(m = 0; m < total_frames; m++)
            {
                printf("%d\t", frames[m]);
            }
            printf("\n");
    }
    printf("\nTotal Number of Page Faults:\t%d\n", page_fault);
    
    return 0;
}