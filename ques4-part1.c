//WAP to find the area of (i) right angled triangle (ii) scalene triangle
// part 1 - area of right angle triangle 

#include <stdio.h>


int main(){
    float height , base , area;
    printf("enter the height of right angle triangle(cm) - ");
    scanf("%f", &height);
    printf("enter the base of right angle triangle(cm) - ");
    scanf("%f", &base);

    area = ((0.5)*(base*height));

    printf("area = %.2fcm*cm\n", area);
    return 0;
}