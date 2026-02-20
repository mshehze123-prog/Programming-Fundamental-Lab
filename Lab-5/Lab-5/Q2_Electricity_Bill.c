#include<stdio.h>
int main(){
	float  units, bill;
	int ctype;
	printf("enter monthly consumed units ");
	scanf("%f",&units);	
	if(units<=100){
		bill=units*10;
	printf("your cost of electricity is: %.2f rs",bill);
	}
	else if(units>100 && units<=300){
		printf("enter costumer type:\n1. Domestic\n2. Commercial: \n");
		scanf("%d",&ctype);
		if(ctype == 2){
			bill=units*15;
		printf("\nyour cost of electricity is: %.2f rs",bill);
		}
		else if(ctype == 1){
		bill=units*12;
		printf("\nyour cost of electricity is: %.2f rs",bill);
		}
	}
	else{
		bill=units*20;
		printf("your cost of electricity is: %.2f rs",bill);
	}
}
