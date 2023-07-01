#include <stdio.h>

int main()
{
    int sum=0,n,v,a=0,r;
    printf("Enter an integer: ");
    scanf("%d",&n);
    v=n;
    while(v!=0)
    {
        v/=10;
        ++a;
    }
    v=n;
    while(v>0)
    {
        r=v%10;
        sum=sum+pow(r,a);
        v/=10;
    }
    if(sum==n)
    {
        printf("%d is an Armstrong number.\n",n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n",n);
    }
    return 0;
}
