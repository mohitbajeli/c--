#include<stdio.h>
int insertarray(int arr[],int size,int capacity,int element,int index);
void printarray(int arr[],int size);
int main()

{
    int size=5;
    int arr[10]={12,43,56,23,76};
    printf("array before inserting\n ");
    printarray(arr,size);
    insertarray(arr,size,10,34,2);
    size++;
    printf("array after inserting\n ");
    printarray(arr,size);
    return 0;

}

int insertarray(int arr[],int size,int capacity,int element,int index)
{
    if(size>=capacity)
    {
        return -1;
    }
    else
    {
        for(int i=size-1;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
            arr[index]=element;
    }

    return 1;
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("the array is %d\n",arr[i]);
    }
}
