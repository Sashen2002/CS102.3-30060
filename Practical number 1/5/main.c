#include <stdio.h>

int main()
{
    float num1,num2,avg;
    printf("Input first decimal: ");
    scanf("%f",&num1);
    printf("Input second decimal: ");
    scanf("%f",&num2);
    avg=(num1+num2)/2;
    printf("Average is %.2f",avg);
    return 0;
}
