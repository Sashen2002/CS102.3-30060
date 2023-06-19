#include <stdio.h>

int main()
{
    float bs,ms,gr;
    int y;
    char ci;
    printf("Enter5 your basic salary: ");
    scanf("%f",&bs);
    printf("Enter your years of service: ");
    scanf("%d",&y);
    printf("Enter your monthly sales: ");
    scanf("%d",&ms);
    printf("Enter 'c' if work in colombo (else enter 'N'): ");
    scanf("%s",&ci);

    if(y > 5)
        gr=bs+(bs*0.10);
    else
        gr=bs;

    if(ci=='C')
        gr=gr+2500;
    if(ms < 25000)
        gr=gr+(ms*0.10);
    else if(ms < 50000)
        gr=gr+(ms*0.12);
    else
        gr=gr+(ms*0.15);

    printf("Gross monthly remuneration = Rs. %.2f\n",gr);

    return 0;
}
