#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head,*temp,*newnode;

/******************function to create newnode*****************/
void create_node(int data){
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
/***************check list *****************/
if (head==0){
head=temp=newnode;
}else{
   temp->next=newnode;
   temp=newnode;

}
}
/*******function to insert new node at the start of the linked list**********/
void insert_start(int data){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter data in new node you want to insert at starting:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
/*******function to display linked list*******/
void display(){
    int count=0;
    temp=head;
    
    while(temp!=0){
        printf("%d\n",temp->data);
        count++;
        temp=temp->next;
    }
    printf("number of item in linked list :%d",count);
}


int main(){
    int choice;
    int data;
    while(choice){
        printf("enter the data:");
        scanf("%d",&data);
        create_node(data);
    printf("do you want continue press (1) otherwise press (0):");
    scanf("%d",&choice);
    }

    display();//print linked list

    insert_start(data);//function call for insertion

    display();   //print linked list after insertion
    return 0;
}