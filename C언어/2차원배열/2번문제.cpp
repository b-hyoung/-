#include <stdio.h>
#include <string.h>

int main() {
    int k,e,m,s;
    int i,j;
    int data[100][100]={0};
    printf("4과목 성적 입력 (국어, 영어, 수학 , 국사) : \n");
    for(i=0;i<4;i++){
        scanf("%d %d %d %d",&k,&e,&m,&s);
        for(j=0;j<4;j++){
            switch(j){   
                case 0:
                    data[i][j]=k;
                case 1:
                    data[i][j]=e;
                case 2:
                    data[i][j]=m;
                case 3:
                    data[i][j]=s;
            }
        if(j==3){
            data[i][j+1]=k+e+m+s;
        }
        data[4][i]+=data[i][0];
    }    
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%3d",data[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}