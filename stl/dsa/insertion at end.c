#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *ptr);
int main()
{
    int choice;
    struct node *head,*newnode,*temp;
    head=0;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue?\n");
        scanf("%d",&choice);
    }
    printf("the linklist is \n");
    display(head);
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data you want to insert\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    printf("the linklist after insertion\n");
    display(head);

    return 0;
}

void display(struct node *ptr)
{
    while(ptr!=0)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    }




