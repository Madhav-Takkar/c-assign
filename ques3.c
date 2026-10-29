//WAP to find the perimeter and area of the rectangle.

#include <stdio.h>


int main(){
    float length , breadth , area , perimeter;
    printf("enter the length (cm) - ");
    scanf("%f", &length);
    printf("enter the breadth (cm) - ");
    scanf("%f", &breadth);

    perimeter = (2*(length+breadth));
    area = (length*breadth);

    printf("perimeter - %.2f cm\n", perimeter);
    printf("area - %.2fcm*cm\n", area);

    return 0;
}