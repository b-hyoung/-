#include <stdio.h>
#include <string.h>

void choice(char** fruit){
	int input;
	do{
		for(int i=0;i<3;i++){
			printf("%d. %s\n",i+1,fruit[i]);
		}
		printf("4. Exit\n"); 
		printf("선택 : ");
		scanf("%d",&input);
		if(input==4){
			printf("프로그램을 종료합니다.");
			break;
		}else if(input > 4){
			printf("잘못 입력하셨습니다. 다시 입력해주세요.");
		}else{
			printf("������ ������ %s �Դϴ�.\n",fruit[input-1]);
		}
	
	}while(1);
}

int main(){
	
	char* fruit[]={"Apple","Tomato","Pineapple"};
	int input=0;
	choice(fruit);
		
	return 0;
}  
