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
    printf("\nEven elements in array are: ");
    for(x=0;x<10;x++)
    {
        if(array[x]%2==0)
        {
            printf("%d ",array[x]);
        }
    }
    printf("\n");
    return 0;
}
