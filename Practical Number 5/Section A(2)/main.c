#include <stdio.h>

int main()
{
    int n1,counter=1,sum=0;
    float avg;
    while(counter<=10)
    {
        printf("Enter %d mark: ",counter);
        scanf("%d",&n1);
        sum+=n1;
        counter++;
    }
    printf("\n");
    avg=(float)sum/10;
    printf("Total is %d\nAverage is %.2f\n",sum,avg);

    if(avg<50)
    {
        printf("\nFail!\n\n");
    }
    else
    {
        printf("\nFail!\n\n");
    }
    return 0;
}
