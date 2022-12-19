#include<stdio.h>

int main()
{
    int pages;
    int pagefaults=0;
    printf("enter the no of pages\n");
    scanf("%d",&pages);
    int incoming[pages];
    int frames;
    printf("enter the no of frames\n");
    scanf("%d",&frames);
    int temp[frames];
    printf("enter reference string\n");
      int s;
    for(int i=0;i<pages;i++)
    {
        scanf("%d",&incoming[i]);
    }
    for(int i=0;i<frames;i++)
    {
        temp[i]=-1;
    }
      printf("\nincoming\t\t");
      for(int i=0;i<frames;i++)
      {
        printf("frame %d\t\t",i+1);
      }
      printf("\n");

    for(int i=0;i<pages;i++)
    {
         s=0;
        for(int j=0;j<frames;j++)
        {
            if(incoming[i]==temp[j])
            {
                s++;
                pagefaults--;
            }
        }
            pagefaults++;

            if((pagefaults<=frames) && (s==0))
            {
                temp[i]=incoming[i];
            }
            else if(s==0)
            {
                temp[(pagefaults-1)%frames]=incoming[i];
            }
            printf("%d\t\t",incoming[i]);
            for(int k=0;k<frames;k++)
            {
                if(temp[k]!=-1){
                printf("%d\t\t",temp[k]);
                }
                else{
                    printf("-\t\t");
                }
                
            }
            printf("\n");
        }
        float page_miss;
        page_miss =  (float)pagefaults/pages;
        float page_hit = (float)(pages-pagefaults)/pages; 
        printf("pagefaults - %d\n",pagefaults);
        printf("page hit ratio is %f\n",page_hit);
        printf("pages miss ratio is %f ",page_miss);
        return 0;
    }
    
