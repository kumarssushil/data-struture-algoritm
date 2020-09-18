#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int size){
    for(int i = 0; i<size; i++){
        printf("your element is %d\n", arr[i]);
    }
}

int inddeletion(int arr[], int size, int index){
    if(size>=100){
        return -1;
    }
    for(int i = index; i<size-1; i++){
        arr[i] = arr[i+1];
    }
}

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int size = 18;
    int index;
    printf("enter the index whatever you want to delete the item");
    scanf("%d",&index);
    display(arr, size);
    printf("running deletion fuction now !\n");
    inddeletion(arr, size, index);
    display(arr, size);
    return 0;
}