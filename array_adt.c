#include<stdio.h>
#include<stdlib.h>

struct myarray{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct myarray *a, int tsize, int usize){
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int *)malloc(tsize*sizeof(int));

}
void setvalue(struct myarray *a){
    int n;
    for(int i = 0; i<a->used_size; i++){
        printf("Enter element at index %d\n", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void showfuction(struct myarray *a){
    for(int i = 0; i<a->used_size; i++){
        printf("ELment  is %d\n", (a->ptr)[i]);
    }
}

int main(){
    struct myarray marks;
    createarray(&marks, 10, 5);
    printf("running setvalue function");
    setvalue(&marks);
    printf("running show function");
    showfuction(&marks);
    return 0;
}