#include <stdio.h>

int main(){
	
	int i,j;
	int size=5;
	int num=3;
	int st=3;
	int data[5][5]={}; 

	
	for(i=0;i<5;i++){
			//3 2,1 , 345
		for(j=st;j<=num;j++){
			data[i][j-1]=j;
		}
		if(i<2){
			st--;
			num++;
		}else{
			st++;
			num--;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
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
