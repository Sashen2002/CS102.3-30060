#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Input two numbers: ");
    scanf("%d,%d",&n1,&n2);
    int re;
    re=n1%n2;

    if(re==0)
        printf("The 1st value is a multiplication of the 2nd number.");
    else
        printf("The 1st value is not a multiplication of the 2nd number.");
    return 0;
}
