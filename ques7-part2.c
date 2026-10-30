////WAP to swap two numbers (i) using third variable (ii) without using third variable.
//part2 - without using third variable

#include <stdio.h>


int main(){
    
    int a ,b ;
    printf("enter 2 numbers to swap - ");
    scanf("%d%d",&a,&b);
    printf("a = %d , b = %d\n",a,b);
    printf("after swapping  - \n");
    a = a+b;
    b = a - b;
    a = a-b;
    printf("a =  %d, b = %d\n", a , b);
    return 0;
}