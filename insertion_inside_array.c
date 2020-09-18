#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int size){
    for(int i = 0; i<size; i++){
        printf("Element is %d\n",arr[i]);
    }
}

int indinsertion(int arr[], int size, int element , int capacity, int index){
    if(size>=capacity){
        printf("memory get exhausted\n");
    }
    for(int i = size-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 0;
}

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = 15;
    int element;
    printf("enter your element to insert it\n");
    scanf("%d", &element);
    int capacity = 100;
    int index;
    printf("enter your index number:-\n");
    scanf("%d",&index);
    display(arr, size);
    printf("running display function after display function\n");
    int insertedelement = indinsertion(arr, size, element, capacity, index);
    printf("your element is get inserted ", insertedelement);
    display(arr, size);
    return 0;
}