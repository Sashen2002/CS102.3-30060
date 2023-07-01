#include <stdio.h>

int main()
{
    int sum,x;
    while(x!=-1)
    {
    printf("Enter a number: ");
    scanf("%d",&x);
    sum+=x;
    }
    printf("Sum of total numbers entered: %d\n\n",sum);
    return 0;
}
