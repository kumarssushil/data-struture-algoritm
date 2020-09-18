#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isfull(struct stack *ptr){
    if(ptr->top = ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size*sizeof(int));
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));
    // check if stack is isempty or isfull
    s->arr[0] = 3;
    s->top++;
    if(isempty(s)){
        printf("the stack is empty\n");
    }
    else{
        printf("the stack is not empty\n");
    }
    return 0;
}