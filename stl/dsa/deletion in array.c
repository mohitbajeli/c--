#include<stdio.h>
void deletion(int arr[],int size,int index);
void printarray(int arr[],int size);
void getarray(int arr[],int size);
int main()
{
    int size;
    int arr[12];
    printf("enter the size of array\n");
    scanf("%d",&size);
    getarray(arr,size);
    printf("array before deletion\n");
    printarray(arr,size);
    deletion(arr,size,3);
    size--;
    printf("array after deletion\n");
    printarray(arr,size);
    return 0;
}
void getarray(int arr[],int size)

{
    printf("enter the array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++){
    printf("the %d element  of array is %d \n",i+1,arr[i]);
    }
}
void deletion(int arr[],int size,int index)
{
    if(index<=-1 || index>size)
    {
        printf("invalid index\n");
    }
    else
    {
    for(int i=index;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    }
}
