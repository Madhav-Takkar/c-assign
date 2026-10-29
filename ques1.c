//WAP to input two numbers and find their sum & print the result.

#include <stdio.h>


int main(){
    int num1 , num2;
    printf("enter num1 - ");
    scanf("%d",&num1);
    printf("enter num2 - ");
    scanf("%d",&num2);
    int sum ;
    sum = (num1 + num2);
    printf("sum = %d\n",sum);


    return 0;
}