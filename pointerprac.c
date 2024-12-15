#include <stdio.h>
#include <stdlib.h>

void create(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("Enter the value of array %d: ", i);
        scanf("%d", (arr + i));
    }
}

int main (){
    
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    create(arr,size);

    return 0;
}