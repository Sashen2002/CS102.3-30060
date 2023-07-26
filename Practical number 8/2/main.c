#include <stdio.h>

void dis(int x,int y)
{
    printf("\nThe sum is %d \n",x+y);
    printf("The difference is %d \n",x-y);
}
int main()
{
    int x,y;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);
    dis(x,y);
    return 0;
}
