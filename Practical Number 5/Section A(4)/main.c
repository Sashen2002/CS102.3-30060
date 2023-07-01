#include <stdio.h>

int main()
{
    int no,mod,sum=0,reverse;
    printf("Enter a numbers: ");
    scanf("%d",&no);

    do
    {
    mod=no%10;
    no=no/10;
    sum=sum+mod;
    }while(no!=0);
    printf("output = %d",sum);
}
