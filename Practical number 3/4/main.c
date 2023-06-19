#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rad;

    printf("Enter radius of the circle: ");
    scanf("%f",&rad);
    printf("Circumference is %.4f\n",2*3.14159*rad);
    printf("Area is %.4f\n",3.14159*rad*rad);
    printf("Diameter is %.2f",2*rad);
    return 0;
}
