#include <stdio.h>

int main()
{
    float ar[10],avg,mx,mn,tot=0;
    int n1;
    printf("Enter value 1: ");
    scanf("%f",&ar[0]);
    mx=ar[0];
    mn=ar[0];
    tot+=ar[0];
    for(n1=1;n1<10;n1++)
    {
        printf("Enter value %d: ",n1+1);
        scanf("%f",&ar[n1]);
        if(ar[n1]>mx)
            mx=ar[n1];
        if(ar[n1]<mn)
            mn=ar[n1];
        tot+=ar[n1];
    }
    printf("\n\n");
    avg=tot/10.0;
    printf("Minimum value is %.2f\n",mn);
    printf("Maximum value is %.2f\n",mx);
    printf("Average value is %.2f\n",avg);
    printf("Reverse order of values are: ");

    for(n1=9;n1>=0;n1--)
    {
        printf("%.2f ", ar[n1]);
    }
    printf("\n");
    return 0;
}
