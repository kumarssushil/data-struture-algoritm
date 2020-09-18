#include<stdio.h>


int linearsearch(int arr[], int size, int element){
    for(int i = 0; i<size; i++){
        if(arr[i] == element){
            return 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,56,7,8,89,9,9};
    int size = sizeof(arr)/sizeof(int);
    int element = 4;
    int searchindex = linearsearch(arr, size, element);
    printf("the element %d was found at index %d\n", element, searchindex);
    return 0;
    return 0;
}
