#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Using While loop
    int x=0;
    while(x<=100)
    {
        printf("%d ",x);
        x++;
    }
    printf("\n\n");

    //Using DO...While loop
    int y=0;
    do
    {
        printf("%d ",y);
        y++;
    }while(y<=100);
    printf("\n\n");

    //Using For loop
    int z;
    for(z=0;z<=100;z++)
    {
        printf("%d ",z);
    }
    printf("\n");
}
