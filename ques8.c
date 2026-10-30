//WAP to find the ASCII value of char.

#include <stdio.h>


int main(){
    char a;
    int b;
    printf("enter the character you want to find ascii value -");
    scanf("%c",&a);
    b = (int)a ;

    printf("the ASCII value of %c is - %d\n",a,b);
    return 0;
}