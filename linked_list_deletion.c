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
//now deletion process
struct node * deletionatfirst(struct node *head){
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
}

struct node * deletionatindex(struct node *head,int index){
    struct node *p = head;
    struct node *q = head->next;
    for(int i = 0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);

}

struct node * deletionatend(struct node *head){
    struct node *p = head;
    struct node *q = head->next;
    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    p->next = NULL;
}

struct node *deletingagivenvalue(struct node*head, int value){
    struct node *p = head;
    struct node *q = head->next;
    while(q->data!=value && q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data==value){
        p->next = q->next;
        free(q);
    }
    return head;
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node  *)malloc(sizeof(struct node));
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
    printf("Running specific function\n");
    // head = deletionatfirst(head);
    // deletionatindex(head, 3);
    // deletionatend(head);
    head = deletingagivenvalue(head, 4);
    linked_list_traversal(head);
    return 0;
}