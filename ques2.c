//WAP to find the simple interest.
#include <stdio.h>


int main(){
    float principle , interest , time , simple_interest;
    printf("enter the principle amount - ");
    scanf("%f",&principle);
    printf("enter the interest(%%) - ");
    scanf("%f",&interest);
    printf("enter time (years) - ");
    scanf("%f", &time);

    simple_interest = ((principle*time*interest)/100);

    printf("simple interest = %.2f \n" ,simple_interest);

    return 0;
}