#include <stdio.h>

void f(int n){

    for(int i=0;i<n;i++){
        printf("%2c",'A'+i);
        n=30;
    }
}

int main(){

    int n;
    scanf("%d",&n);

    f(n);
    printf("%d",n);
    return 0;
}