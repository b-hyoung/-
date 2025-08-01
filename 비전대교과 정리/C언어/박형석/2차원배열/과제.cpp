#include <stdio.h>

int main(){
	
	int i,j;
	int data[100][100]={0};
	int input;
    scanf("%d",&input);
    int k=1;
    int sta=input;
    int end=input;
	// 4,4 4,0 3,1 2 3
	for(i=0;i<input;i++){
        for(j=sta;j<=end;j++){
            data[j][i]=k++;
        }
        sta--;
        end++;
    }

    
    for(i=0;i<=input*2-1;i++){
        for(j=0;j<=input;j++){
            if(data[i][j] == 0){
                printf("%3c" ,' ');
            }else{
                printf("%3d" , data[i][j]);
            }
        }
        printf("\n");
    }
	
	return 0;
}
