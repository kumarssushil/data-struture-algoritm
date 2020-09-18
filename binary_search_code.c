#include<stdio.h>
#include<stdlib.h>

int binary_search_code(int arr[], int size, int element){
    if(size>=100){
        return -1;
    }
    int low = 0;
    int mid;
    int high = size-1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
}

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int size = 13;
    int element;
    printf("enter your element whatever you want to search binaryly");
    scanf("%d",&element);
    int searchindex = binary_search_code(arr, size, element);
    printf("your element was found at index %d", searchindex);
    return 0;
}