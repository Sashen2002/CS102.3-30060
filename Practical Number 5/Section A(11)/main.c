#include <stdio.h>

int main()
{
    int n1,in,count=0;
    printf("Enter a number: ");
    scanf("%d",&n1);
    for(in=1;in<=n1;in++)
    {
        if(n1%in==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a prime number.\n\n",n1);
    }
    else
    {
        printf("%d is not a prime number.\n\n",n1);
    }
    return 0;
}
