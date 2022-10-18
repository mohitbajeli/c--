#include<stdio.h>
int multiple(int *a);
int main()
{
    int i=4;
    int c=multiple(&i);
    printf("the multiple value is %d ", c);
    return 0;
}

int multiple(int *a)
{
    int b=*(a)*10;
    return b;
}
