#include<stdio.h>
#include<stdlib.h>

int linear_search_code(int arr[], int size, int element){
    if(size>=100){
        printf("memory exhausted\n");
    }
    for(int i = 0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }
}

int main(){
    int arr[100] = {1,2,3,4,45,46,36,365,24,25,50,60,70};
    int size = 13;
    int element;
    printf("enter the elment whatever you want to search inside the array\n");
    scanf("%d",&element);
    int searchindex = linear_search_code(arr, size, element);
    printf("your element was found at %d index",searchindex);
    return 0;
}