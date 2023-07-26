#include <stdio.h>

void dis()
{
    int x,y,sum,differ;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);
    sum=x+y;
    differ=x-y;
    printf("\nThe sum is %d \n",sum);
    printf("The difference is %d \n",differ);
}
int main()
{
    dis();
    return 0;
}
