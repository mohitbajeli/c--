#include<stdio.h>
int main()
{
    int arr[34]={12,65,43,67,23};
    int *q=arr;
    printf("the element is %d\n",*(arr+2));
    printf("the element is %d",*(q+2));
    return 0;
}
