#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linked_list_traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element is: %d\n",ptr->data);
        ptr = ptr->next;
    }
}

//now insertion process
struct node * insertatfirst(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node * insertatindex(struct node *head, int data, int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    for(int i = 0; i<index-1; i++){
        p = p->next;
    }
    ptr->data  = data;
    ptr->next = p->next;
    p->next = ptr;
    
}

struct node * insertatend(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->data = data;
    while(p->next!=NULL){
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->next = NULL;
}

struct node *insertafternode(struct node * head, struct node *prevnode, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
    

}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    linked_list_traversal(head);
    printf("running specific function\n");
    // head = insertatfirst(head, 40);
    // insertatindex(head, 666, 2);
    // insertatend(head, 777);
    insertafternode(head, third, 888);
    linked_list_traversal(head);
    return 0;
}