#include <stdio.h>

int main()
{
    int n1,in,fac=1;
    printf("Enter an integer: ");
    scanf("%d",&n1);

    if(n1<0)
    {
        printf("Error!");
    }
    else
    {
        for(in=1;in<=n1;++in)
        {
            fac*=in;
        }
        printf("Factorial of %d = %d\n",n1,fac);
    }
    return 0;
}
