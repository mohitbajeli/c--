#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node*ptr);
int main()
{
    int choice;
    struct node *head,*newnode,*temp;
    head=0;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data to insert\n");
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
        printf("do you want to continue ?\n");
        scanf("%d",&choice);
    }
    display(head);
    temp=head;
    deletion(temp);
    display(head);
    return 0;
}

void display(struct node *ptr)
{
    printf("the linklist is \n");
    while(ptr!=0)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void deletion(struct node *temp)
{
    int pos;
    struct node *nextnode;
    printf("enter the position you want to delete element\n");
    scanf("%d",&pos);
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}



