#include <stdio.h>

int main()
{
    int c,p,t=0,n1=0;
    float aveg;
    printf("Enter your items prices.");
    printf("\n\n");
    for(c=1;c<=10;c++)
    {
        printf("Enter item %d price: ",c);
        scanf("%d",&p);
        if(p>=200)
        {
            n1+=1;
        }
        t+=p;
    }
    aveg=(float)t/10;
    printf("\nAverage price of an item is: %.2f\n",aveg);
    printf("Number of items with price greater than 200: %d.\n",n1);
    return 0;
}
