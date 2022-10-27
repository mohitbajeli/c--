#include<stdio.h>
#include<stdlib.h>
struct myarray
{
    int totalsize;
    int usedsize;
    int *ptr;
};
void createarray(struct myarray *a,int tsize,int usize);
void setval(struct myarray *a);
void show(struct myarray *a);



int main()
{
    struct myarray marks;
    createarray(&marks,10,2);
     setval(&marks);
    show(&marks);
    return 0;
}


void createarray(struct myarray *a,int tsize,int usize)
{
    a->totalsize=tsize;
    a->usedsize=usize;
    a->ptr=(int *)malloc(a->totalsize*sizeof(int));
}
void setval(struct myarray *a)
{
    for(int i=0;i<a->usedsize;i++)
    {
        int e;
        printf("enter the %d value\n ",i+1);
        scanf("%d",&e);
        (a->ptr)[i]=e;
    }
}
void show(struct myarray *a)
{
    for(int i=0;i<a->usedsize;i++)
        printf("the marks of %d student is %d\n ",i+1,(a->ptr)[i]);
}
