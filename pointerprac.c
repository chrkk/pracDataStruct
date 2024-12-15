#include <stdio.h>
#include <stdlib.h>

void create(int *arr, int size){
    for(int i = 0; i < size; i++){
    printf("Enter the value of array %d: ", i);
    scanf("%d", (arr + i));
    }
}

void display(int *arr, int size){
    for(int i = 0; i < size;i ++){
        printf("%d ", *(arr + i));
    }
}

void side(int *arr, int size){
    for(int i = 0; i < size; i++){
        if (*(arr + i+1) > *(arr + i)){
            printf("1");
        }
    }

}

int main(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    create(arr,size);
    display(arr,size);    
    side(arr,size);
    return 0;
}