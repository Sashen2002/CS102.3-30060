#include <stdio.h>

int main()
{
    int n1,rev=0;
    printf("Enter an integer: ");
    scanf("%d",&n1);
    do
    {
        rev=rev*10+n1%10;
        n1/=10;
    }while (n1!=0);
    printf("Reversed number = %d",rev);
}
