#include<stdio.h>
int main()
{
    int a;
    printf("enter the size of array\n");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        int e;
        printf("enter the %d element\n",i+1);
        scanf("%d",&e);
        arr[i]=e;
    }
    for(int j=0;j<a;j++)
    {
        printf("the %d element is %d\n",j+1,arr[j]);
    }
    return 0;
}
