#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    float num1;
    float num2;
    float num3;
 
    scanf("%f %f", &num1, &num2);
 
    num3 = num1 + num2 - 4.5;
 
    printf("%f\n", num3);
 
    return 0;
}
