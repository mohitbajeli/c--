#include<stdio.h>

int linearsearch(int ptr[],int element,int size,int capacity);

int main()
{
    int arr[15]={12,54,34,89,23};
    printf("the index at which element is %d",linearsearch(arr,54,5,15));
    return 0;
}

int linearsearch(int ptr[],int element,int size,int capacity)
{
    for(int i=0;i<size;i++)
    {
        if(ptr[i]==element){
            return i;
        }

    }
}

