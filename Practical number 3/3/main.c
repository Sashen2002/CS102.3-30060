#include <stdio.h>

int main()
{
    float ns,bs,in,inc;
    char en[20];
    printf("Input employee name: ");
    scanf("%s",&en);
    printf("Input employee basic salary: ");
    scanf("%f",&bs);
    printf("\n");
    if(5000<=bs<10000)
        in=10;
    if(bs>=10000)
        in=15;
    else
        in=5;

    inc=(bs/100)*in;
    ns=bs+inc;
    printf("Employee Name: %s\n",en);
    printf("New Salary: %.2f",ns);
    return 0;
}
