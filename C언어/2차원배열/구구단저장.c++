#include <stdio.h>

int main() {
    int i,j;
    int row=9,col=3;
    int data[100][100]={0};
    int start=2,end=4;
    for(i=start;i<=end;i++){
        for(j=1;j<=row;j++){
            data[i-start][j-1]=i*j;
        }
    }
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf("%3d",data[i][j]);
        }
        printf("\n");
    }
    return 0;
}