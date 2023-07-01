#include <stdio.h>

int main()
{
    int eno=0,t;
    float wh,otp,pe;
    while(eno!=-999)
    {
        printf("Input the Employee number: ");
        scanf("%d",&eno);
        if(eno==-999)
        break;
        printf("Input the no. of work hours: ");
        scanf("%f",&wh);
        if(wh<40)
        {
            otp=wh*150.00;
        }
        else
            otp=((wh-40)*200)+(wh*150.00);
        if(otp>4000)
        {
            pe+=1;
            t+=1;
        }
        else
            t+=1;

        printf("\nEmployee Number: %d\n",eno);
        printf("Over Time Payment: %.2f\n",otp);

        printf("The percentage of Employees whose OTP is exceeding the Rs.4000/=: %.2f%%\n\n",(pe/t)*100);
    }
}
