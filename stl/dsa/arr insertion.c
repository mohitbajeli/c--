#include<stdio.h>

int insertion(int ptr[],int size,int element,int index,int capacity);
void display(int size, int ptr[]);
int main()
{
    int arr[10]={1,43,23,56,12};
    int size =5;
    int element = 76;
    display(size,arr);
     insertion(arr,size,element,5,10);
     size+=1;
    display(size,arr);
    return 0;
}


int  insertion(int ptr[],int size,int element,int index,int capacity)
{
    if(size>=capacity)
    {
        return -1;
    }
    else
    {
        for(int i=size-1;i>=index;i--)
        {
            ptr[i+1]=ptr[i];
        }
        ptr[index]=element;
        return 1;
    }
}
void display(int size,int ptr[])
{
    for(int i=0;i<size;i++){
        printf("the element at %d is %d\n",i+1,ptr[i]);
}
printf("\n");
}
