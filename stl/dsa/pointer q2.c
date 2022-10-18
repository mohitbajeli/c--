#include<stdio.h>
void pass(int a);
int main()
{
    int i=5;
    printf("the address of i is %u\n",&i);
    pass(i);
}

void pass(int a )
{
    printf("the address of i in function is %u\n",&a);
}
