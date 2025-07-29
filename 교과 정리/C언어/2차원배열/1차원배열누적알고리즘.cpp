#include <stdio.h>

int main() {

    int sum=0,count=0,evensum=0;
    int data[10]={0};
    int i=0;
    while(1){
        scanf("%d",&data[i]);
        if(data[i]==0){
            break;
        }else if(data[i]%2==0){
            count++;
        }
        sum+=data[i];
        i++;
    }
    printf("Array =");
    for(i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(data[i] > data[j]){ // 해당 기호 > 변경 시 내림차순
                int temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
        printf("%2d",data[i]);
    }
    
    printf("\nsum = %d \n",sum);
    printf("count = %d \n",count);
 
    return 0;
}




