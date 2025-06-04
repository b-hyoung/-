#include <stdio.h>
#include <string.h>

void temp(char *data){
	for(int i=0;i<strlen(data);i++){
		printf("*ps : %.2d %c\n",i,data[i]);
	}
}

int main(){
	char data[31];
	printf("30바이트내로 입력: ");
	scanf("%s",data); 
	char* d=data;
	
	temp(d);
}
