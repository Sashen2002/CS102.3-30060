#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,in;
    printf("Enter a integer: ");
    scanf("%d",&n1);
    printf("The factors of %d are: ",n1);
    for(in=1;in<=n1;++in)
    {
        if(n1%in==0)
        {
            printf("\n   %d",in);
        }
    }
    return 0;
}
