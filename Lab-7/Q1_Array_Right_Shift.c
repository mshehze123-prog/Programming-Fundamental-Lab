#include<stdio.h>
void reverse ( int arr[],int a,int b){
	for ( int i = a , j = b ;i<j;i++,j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j]=temp;	
}
}
int main (){
	int arr[5 ]={1,2,3,4,5};
	reverse(arr,0,4);
	reverse(arr,1,4);
	for ( int i = 0; i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
