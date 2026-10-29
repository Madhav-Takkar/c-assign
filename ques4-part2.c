//WAP to find the area of (i) right angled triangle (ii) scalene triangle
//part 2-scalene triangle

#include <stdio.h>
#include<math.h>

int main(){
    
    float s1,s2,s3,area;
    printf("enter side 1 , side 2 , side 3 (in cm)- ");
    scanf("%f%f%f",&s1,&s2,&s3);
    float s; // semi perimeter
    s = ((s1+s2+s3)/2);

    float expression;
    expression = (s*(s-s1)*(s - s2)*(s-s3));
    area = sqrt(expression);
    printf("area = %.2f\n",area);


    return 0;
}