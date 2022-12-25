#include<stdio.h>

int main()
{
    int ch;
    printf("enter 1 or 0\n");
    scanf("%d",&ch);

    switch(ch){
        case 0:
        {
            printf("hello\n");
            break;
        }
        case 1:
        {
            printf("mohit\n");
            break;
        }
        default:
        {
            printf("invalid");
        }


    }

    return 0;
}