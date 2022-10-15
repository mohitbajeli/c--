#include<stdio.h>
#include<stdlib.h>
struct student
{
    int totalsize;
    int usedsize;
    int *ptr;
};
void getarray( struct student *a);
void printarray(struct student *a);
void createarray(struct student *a,int tsize,int usize);
int main()
{
   struct student marks;
    createarray(&marks,10,4);
    getarray(&marks);
    printarray(&marks);
    return 0;
}
void createarray(struct student *a,int tsize,int usize)
{
    a->totalsize=tsize;
    a->usedsize=usize;
    a->ptr=(int *)malloc(a->totalsize*sizeof(int));
}

void getarray( struct student *a)
{
    for(int i=0;i<a->usedsize;i++)
    {
        int e;
        printf("enter the %d student marks\n",i+1);
       scanf("%d",&e);
       (a->ptr)[i]=e;

    }
}

void printarray(struct student *a)
{
    for(int i=0;i<a->usedsize;i++)
    {
        printf("the marks of %d student is %d\n",i+1,a->ptr[i]);
    }
}
