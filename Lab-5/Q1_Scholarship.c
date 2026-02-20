#include<stdio.h>
int main(){
	float inc, cgpa;
	printf("enter your cgpa: ");
	scanf("%f",&cgpa);
	printf("enter your family income: ");
	scanf("%f",&inc);
	if(cgpa>=3.5){
		if(inc<50000)
			printf("you are eligible for 100%% scholarship");
		else
		printf("you are eligible for 50%% scholarship");
	}
	else if(cgpa>=3 && inc<40000){
		printf("you are eligible for 25%% scholarship");
	}
	else{
		printf("you are not eligible for scholarship");
	}
}
