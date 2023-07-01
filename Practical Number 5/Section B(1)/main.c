#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,positive=0,negative=0,array[10],zero=0;
    printf("Please enter 10 numbers to find positives,negatives,zeros.\n");
    for(n1=0;n1<10;n1++)
    {
        scanf("%d",&array[n1]);
    }
    for(n1=0;n1<10;n1++)
    {
        if(array[n1]>0)
        positive++;
        else if(array[n1]<0)
        negative++;
        else
        zero++;
    }
    printf("\nNumber of positive numbers: %d\n",positive);
    printf("Number of negative numbers: %d\n",negative);
    printf("Number of zeros: %d\n",zero);
    return 0;
}
