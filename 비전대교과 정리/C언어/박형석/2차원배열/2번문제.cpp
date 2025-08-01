#include <stdio.h>
#include <string.h>

int main() {
    int k,e,m,s;
    int i,j;
    int sum=0;
    int data[100][100]={0};
    for(i=0;i<4;i++){
        printf("4과목 성적 입력 (국어, 영어, 수학 , 국사) :");
        scanf("%d %d %d %d",&k,&e,&m,&s);
        for(j=0;j<4;j++){
            switch(j){   
                case 0:
                    data[i][j]=k;
                    data[4][j]+=k;
                    break;
                case 1:
                    data[i][j]=e;
                    data[4][j]+=e;
                    break;
                case 2:
                    data[i][j]=m;
                    data[4][j]+=m;
                    break;
                case 3:
                    data[i][j]=s;
                    data[4][j]+=s;
                    break;
            }
        data[i][j+1]=k+e+m+s;
    }    
        data[4][4]+=data[i][4];
    }
    printf("\n국어 영어 수학 국사 총점\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%4d",data[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}