#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linked_list_traversal(struct node *head){
    struct node *ptr = head;
    do{
        printf("Element is %d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

struct node *insertatfirst(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;
    while(p!=head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    ptr = head;
    return head;

}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third =(struct node *)malloc(sizeof(struct node));
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
    fifth->next = head;

    linked_list_traversal(head);
    printf("running insertatfirst function\n");
    insertatfirst(head, 12);
    linked_list_traversal(head);

    return 0;
}