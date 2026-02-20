#include<stdio.h>
int main(){
    float a, b, c;
    printf("Enter side 1: ");
    scanf("%d", &a);
    printf("Enter side 2: ");
    scanf("%d", &b);
    printf("Enter side 3: ");
    scanf("%d", &c);
    if(a+b<=c || b+c<=a || a+c<=b){
        printf("Result: Not a valid triangle\n");
    }
    else if (a==b && b==c){
        printf("Equalateral triangle\n");
    }
    else if(a==b || a==c || b==c){
        printf("Iscocles triangle\n");
    }
    else{
        printf("Scalence Triangle");
    }
}
