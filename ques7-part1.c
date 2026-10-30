//WAP to swap two numbers (i) using third variable (ii) without using third variable.
//part 1  - using third variable 

#include <stdio.h>


int main(){
    
int a , b , c ;

printf("enter 2 numbers to swap - ");
scanf("%d%d",&a,&b);
printf("a = %d , b = %d\n",a,b);
printf("after swapping  - \n");
c = a;
a = b;
b = c;
printf("a =  %d, b = %d\n", a , b);

    return 0;
}