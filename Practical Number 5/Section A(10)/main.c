#include <stdio.h>

int main()
{
    int counter,x;
    for(counter=1;counter<=5;counter++)
    {
        for(x=1;x<=counter;x++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
