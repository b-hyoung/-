#include <stdio.h>

int main() {
    int i ,j,n;
    
    scanf("%d",&n);
    int temp = n;
    for(i=0;i<n*2;i++){
        for(j=0;j< temp;j++){
            if(i < n){
                printf("%c",j < n-(i+1) ? ' ' : '*');
            }else{
                printf("%c", j > i-n ? '*' : ' ' );
            }    
        }
        if(i<n-1){
            temp++;
        }else{
            temp--;
        }
        printf("\n");
    }
    return 0;
}