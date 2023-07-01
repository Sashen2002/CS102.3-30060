#include <stdio.h>

int main()
{
    int max=0,min=100,t=0,c=1,n1;
    float aveg;
    do
    {
        printf("Enter %d mark: ",c);
        scanf("%d",&n1);
        if(n1>max)
        max=n1;
        if(n1<min)
        min=n1;
        t+=n1;
        c++;
    }while(c<=10);

    aveg=(float)t/10;
    printf("\n\nMaximum mark: %d\n",max);
    printf("Minimum mark: %d\n",min);
    printf("Average mark: %.2f\n",aveg);
    return 0;
}
