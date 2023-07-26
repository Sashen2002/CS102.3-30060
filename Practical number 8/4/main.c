#include <stdio.h>
int qo(int x,int y)
{
    return x/y;
}
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("\nThe quotient is %d \n",qo(x,y));
    return 0;
}
