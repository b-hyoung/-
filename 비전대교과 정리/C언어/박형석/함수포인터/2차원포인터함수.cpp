#include <stdio.h>

int sum(int data[][4],int length){
	int sum=0;
	int x=4;
	int n=length/x;
	for(int i=0;i<n;i++){
		for(int j=0;j<x;j++)
		sum += data[i][j];
	}
	return sum;
}

int main(){
	
	int arr1[2][4]={1,2,3,4,5,6,7,8};
	int arr2[3][4]={1,1,1,1,3,3,3,3,5,5,5,5};
	
	int length = sizeof(arr1) / sizeof(int);
	int length2 = sizeof(arr2) / sizeof(int);
	
	int s = sum(arr1,length);
	int s2 = sum(arr2,length2);

	printf("arr1 = %d\n",s);
	printf("arr2 = %d",s2);
} 
