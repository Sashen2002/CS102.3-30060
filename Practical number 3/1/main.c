#include <stdio.h>

int main()
{
    int n1,n2,max;
    printf("Input two numbers: ");
    scanf("%d,%d",&n1,&n2);
    if(n1>n2)
    max=n1;
    else
    max=n2;
    printf("Highest number is %d",max);
    return 0;
}
