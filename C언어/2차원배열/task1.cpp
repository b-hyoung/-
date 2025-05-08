#include <stdio.h>

int main(){
	int data[5][5]={0};
	int i,j;
	int k=1;
	
	
	for(i=0;i<5;i++){
		if(i%2==0){
			for(j=0;j<5;j++){
				data[i][j]=k;
				k++;
			}
		}else{
			for(j=4;j>=0;j--){
				data[i][j]=k;
				k++;
			}	
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