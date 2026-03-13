#include<stdio.h>
int main (){
	int arr[10];
	for ( int i = 0;i<10;i++){
		printf("Enter the element %d : ",i +1);
		scanf("%d",&arr[i]);
	}
	for ( int i = 0; i<10;i++){
		printf("%d ",arr[i]);
	}
	int n;
	printf("\nEnter the number you want to find in the array:\n ");
	scanf("%d",&n);
	int count = 0;
	for ( int i = 0; i<10;i++){
		if (n == arr[i]){
			count++;
		}
	}

if (count > 0) {
        printf("Your number has been found!\n");
        printf("Your element occurs %d time(s).\n", count);
    } else {
        printf("Your number is not in the array.\n");
    }
	return 0;	
}
