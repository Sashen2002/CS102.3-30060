#include <stdio.h>
int pro(int x,int y)
{
    int pr=x*y;
    return pr;
}
int main()
{
    int x,y;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);
    printf("\nThe product is %d \n",pro(x,y));
    return 0;
}
