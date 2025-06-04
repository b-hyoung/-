#include <stdio.h>

int search(int *key,int input){
    for(int i=0;i<5;i++){
        if(key[i] == input){
            return i;
        }
    }
    return -1;
}

int main(){

    int score[5]={100,90,50,66,12};
    int input;
    printf("검색 Key 값 : ");
    scanf("%d",&input);
    
    int s = search(score,input);

    if(s == -1){
        printf("%d을 찾을수 없습니다.",input);
    }else{
        printf("검색 값 %d는 존재합니다.",input);
        printf("%d는 %d 번째에 있습니다.",input,s+1);
    }

    return 0;
}