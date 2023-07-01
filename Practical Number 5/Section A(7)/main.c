#include <stdio.h>

int main()
{
    int n1=0,n2=1,x,counter;
    printf("Down here is Fibonacci Sequence's first 10 numbers.\n\n");
    printf("Fibonacci Series: %d, %d, ",n1,n2);
    x=n1+n2;
    for(counter=3;counter<=10;counter++)
    {
        printf("%d, ",x);
        n1=n2;
        n2=x;
        x=n1+n2;
    }
    printf("\n\n");
}
