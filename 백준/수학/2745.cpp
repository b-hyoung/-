#include <stdio.h>
#include <string.h>

int main(){
    
    int n; char str[100];
    scanf("%s %d",str,&n);
    int result = 0;
    int gop=1;
    int temp;
    int len=strlen(str);
    for(int i=len-1; i >= 0; i--){
        if(str[i]-'A' < 0){
            temp = str[i]-'0';
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            temp = (str[i] - 'A' +10);
        }
        result += (temp * gop);
        gop *= n;
    }
    printf("%d",result);
	return 0;
}
