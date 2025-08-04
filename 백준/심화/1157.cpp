#include<stdio.h>
#include <string.h>

int main() {
    char data[100]={0};
    int lower[100]={0};
    int max=0;
    scanf("%s",data);
    int len = strlen(data);
    char result = ' ';
    
    for(int i=0;i<len;i++){
        data[i]=(data[i] >= 'a' && data[i] <= 'z') ? data[i]-32 : data[i];
        for(int j=0;j<26;j++){
            if(data[i] == 'A' + j){
                lower[j]++;
            }
        }
    }

    for(int i=0; i<26;i++){
        if(max < lower[i]){
            max=lower[i];
            result= 'A' + i;
        }else if(max == lower[i]){
            result = '?';
        }
    }
    printf("%c" , result);
    return 0;
}
/*
문제
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

입력
첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

출력
첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.

예제 입력 1         예제입력 2
Mississipi        zZa
예제 출력 1         예제출력 2
?                 Z

=============================

예제 입력 3     예제 입력 4 
z             baaa
예제 출력 3     예제 출력 4 
z             A
*/