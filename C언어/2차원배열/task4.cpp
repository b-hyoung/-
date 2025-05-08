#include <stdio.h>

int main(){
	
	int i,j;
	int data[5][5]={0};
	int st=0,num=4;
	
	for(i=0;i<=4;i++){
		for(j=st;j<=num;j++){
			data[i][j]=j+1;
		}
		if(i<2){
			num--;
		}else{
			num++;
		}
	}
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			if(data[i][j]==0){
				printf("%3c",' ');	
			}else{
				printf("%3d",data[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
