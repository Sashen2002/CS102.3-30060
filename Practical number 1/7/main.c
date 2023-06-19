#include <stdio.h>

int main()
{
    int num1,num2,temp;
    printf("Enter two Number: ");
    scanf("%d,%d",&num1,&num2);
    printf("\n");
    printf("Before swap: %d,%d\n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swap: %d,%d",num1,num2);
    return 0;
}
