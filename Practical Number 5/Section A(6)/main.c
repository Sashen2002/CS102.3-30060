#include <stdio.h>

int main()
{
    int b,p,answer=1,counter;
    printf("Enter the base number: ");
    scanf("%d",&b);
    printf("Enter an power: ");
    scanf("%d",&p);

    for(counter=1;p>=counter;counter++)
    {
        answer+=b;
    }
    printf("Answer is = %d",answer);
}
