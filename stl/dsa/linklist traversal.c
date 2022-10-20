#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*newnode,*temp;
    int choice;
        head=0;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof (struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue\n");
        scanf("%d",&choice);
    }
    printf("the linklist is \n");
    temp=head;
    while(temp!=0){
    printf("%d\n",temp->data);
    temp=temp->next;
    }
    return 0;
}
