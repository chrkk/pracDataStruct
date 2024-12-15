#include <stdio.h>
void create(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("Enter Array[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("Array [%d]\n", arr[i]);
    }
}

int sum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main (){
    
    
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    create(arr, size);
    display(arr,size);

    printf("Total sum: %d", sum(arr,size));
    return 0;
}