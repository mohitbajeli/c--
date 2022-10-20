#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void print(struct node *ptr);
int main()
{
    struct node *head,*newnode,*temp;
    int choice;
    head=0;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data to insert\n");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("do you want to continue\n");
        scanf("%d",&choice);
    }
    printf("the linklist is \n");
    print(head);
    return 0;

}
void print(struct node *ptr)
{
    while(ptr!=0)
    {
        printf("%d\n");
        ptr=ptr->next;
    }
}
