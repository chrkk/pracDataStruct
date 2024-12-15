#include <stdio.h>
int main (){
    
    int arr [] = {1,2,3,4,5};
    int size = 5;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < arr[i + 1]){
            printf("%d ", arr[i + 1]);
        }
    }

    for(int i = 0; i < size - count; i++){
        printf("-1 ");
    }
    
    
    return 0;
}