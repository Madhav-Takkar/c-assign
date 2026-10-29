//WAP to find the average marks of three subjects

#include <stdio.h>


int main(){
    float marks1 , marks2 , marks3, average;
    printf("enter the marks of 3 subjects (out of 100) - ");
    scanf("%f%f%f", &marks1,&marks2,&marks3);
    average = ((marks1 + marks2 +marks3)/3);
    printf("average marks of all three subjects  - %.2f\n",average);
    return 0;
}