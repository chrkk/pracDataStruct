#include <stdio.h>
void create(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("Enter array %d: ", i);
        scanf("%d", (arr + i));
    }
}

void display(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("Array [%d] = %d\n", i, *(arr + i));
    }
}

int sum(int *arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *(arr + i);
    }
    return sum;
}

void reverseArr(int *arr, int size){
    int *start = arr;
    int *end = arr + size - 1;
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    for(int i = 0; i < size; i++){
        printf(" %d", *(arr + i));
    }
}

int main (){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    
    create(arr,size);
    display(arr,size);
    reverseArr(arr,size);

    printf("\nSum of all: %d", sum(arr,size));
    return 0;
}