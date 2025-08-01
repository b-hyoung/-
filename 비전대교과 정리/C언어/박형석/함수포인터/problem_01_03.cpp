#include <stdio.h>
#include <string.h>

int max(int *arr,int *maxvalue){
    for(int i=0; i<5;i++){
        if(*maxvalue < arr[i]){
            *maxvalue = arr[i];
        }
    }
    return *maxvalue;
}
int min(int *arr,int *maxvalue){
    for(int i=0; i<5;i++){
        if(*maxvalue > arr[i]){
            *maxvalue = arr[i];
        }
    }
    return *maxvalue;
}

int main() {

    int arr[5]={23,10,15,92,88};
    
    int *maxvalue = &arr[0];

    for(int i=0;i<5;i++){
        printf("%d번째 배열 요소 : %d \n",i+1,arr[i]);
    }
    
    printf("\n");
    int x = max(arr,maxvalue);
    int y = min(arr,maxvalue);
    
    printf("Max = %d\n",x);
    printf("Min = %d",y);
    
    return 0;
}