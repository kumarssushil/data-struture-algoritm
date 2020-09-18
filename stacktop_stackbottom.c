#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int push(struct stack *ptr , int data){
    if(isfull(ptr)){
        printf("stack overflow , unable to push element to it\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

int pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("stack underflow\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr, int i){
    int arrayind = ptr->top-i+1;
    if(arrayind < 0){
        printf("given position is invalid\n");
    }
    else{
        return ptr->arr[arrayind];
    }
}
int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 20;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));

    push(sp,55);
    push(sp,56);
    push(sp,57);
    push(sp,59);
    push(sp,58);
    push(sp,5);
    push(sp,57);
    push(sp,60);
    if(isempty(sp)){
        printf("the stack is empty\n");
    }
    else{
        printf("the stack is not empty\n");
    }
    printf("printing the value by using the peek operation\n");
    for(int i= 1;i<sp->top+1; i++){
        printf("The Elment at %d is %d\n",i, peek(sp,i));
    }
    printf("the stack topmost element is %d\n",sp->arr[sp->top]);
    printf("the stack bottom most element  is %d",sp->arr[0]);
    return 0;
}

