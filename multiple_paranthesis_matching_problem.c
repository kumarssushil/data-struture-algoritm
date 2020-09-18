#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char *arr;
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

void push(struct stack *ptr, char data){
    if(isfull(ptr)){
        printf("stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

char pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("stack underflow\n");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
char stacktop(struct stack *sp){
    return sp->arr[sp->top];
}

int match(char a, char b){
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
   return 0;
}

int parenthsismatching(char *exp){
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size*sizeof(char));
    char popped_ch;

    for(int i = 0; exp[i]!='\0'; i++){
        if(exp[i]=='(' || exp[i] == '{' || exp[i] == '['){
            push(sp,exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(isempty(sp)){
                return 0;
            }
            popped_ch = pop(sp);
            if(!match(popped_ch, exp[i])){
                return 0;
            }
        }
    }
    if(isempty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char *exp = "({[4*5]})))";
    if(parenthsismatching(exp)){
        printf("the parenthesis are matched\n");
    }
    else{
        printf("the parenthessi are not matched\n");
    }
    return 0;
}