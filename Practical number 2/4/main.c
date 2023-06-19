#include <stdio.h>

int main()
{
    float f,c;
    printf("Input in degrees Fahrenheit: ");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("%.2f degrees celcius",c);
    return 0;
}
