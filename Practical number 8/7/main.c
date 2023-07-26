#include <stdio.h>
double pro(int x,float y)
{
    return x*y;
}
int main()
{
    int x;
    float y;
    printf("Enter two number: ");
    scanf("%d %f",&x,&y);
    printf("The product is %lf",pro(x,y));
    return 0;
}
