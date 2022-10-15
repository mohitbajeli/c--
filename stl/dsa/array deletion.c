#include<stdio.h>
void printarray(int arr[],int size);
void deletearray(int arr[],int index,int size);
int main()
{
    int index=3;
    int size=5;
    int arr[10]={12,43,62,46,23};
    printf("array before deletion \n");
    printarray(arr,size);
    deletearray(arr,index,size);
    size--;
      printf("array after deletion \n");
    printarray(arr,size);
    return 0;

}

void deletearray(int arr[],int index,int size)
{
    for(int i=index;i<size-1;i++)
    {

            arr[i]=arr[i+1];

    }

}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("the array's %d element is %d\n",i+1,arr[i]);
    }
}
