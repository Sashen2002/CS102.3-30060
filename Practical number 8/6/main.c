#include <stdio.h>
void abc(int a,int b)
{
    printf("\nThe sum is %d \nThe difference is %d \nThe product is %d \n",a+b,a-b,a*b);
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    abc(a,b);
    return 0;
}
