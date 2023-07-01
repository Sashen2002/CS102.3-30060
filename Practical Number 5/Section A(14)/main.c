#include <stdio.h>

int main()
{
    int array[10],x;
    printf("Enter 10 elements in the array: \n");
    for(x=0;x<10;x++)
    {
        printf("element - %d: ",x);
        scanf("%d",&array[x]);
    }
    printf("\nElements in array are: ");
    for(x=0;x<10;x++)
    {
        printf("%d ",array[x]);
    }
    printf("\n");
    return 0;
}
