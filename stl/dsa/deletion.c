#include<stdio.h>
void display(int ptr[],int size);
void deletion(int ptr[], int index,int size);


int main()
{
 int arr[15]={23,65,34,12,54,87};
 int size=6;
 int element=34;
 display(arr,size);
 deletion(arr,3,size);
 size-=1;
 display(arr,size);
 return 0;
}



void display(int ptr[],int size)
{
    for(int i=0;i<size;i++){
        printf("the element at %d is %d\n",i+1,ptr[i]);
}
printf("\n");
}


void deletion(int ptr[],int index,int size)
{
    for(int i=index;i<size-1;i++)
    {
        ptr[i]=ptr[i+1];
    }
}
