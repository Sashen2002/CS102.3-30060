#include <stdio.h>
void sum()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("The sum is %d \n\n",x+y);
}
int main()
{
    sum();
    sum();
    sum();
    return 0;
}
