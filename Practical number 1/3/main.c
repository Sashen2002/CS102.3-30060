#include <stdio.h>

int main()
{
    int integer;
    float flo;
    double dou;
    char ch;
    printf("Input a Character value: ");
    scanf("%c",&ch);
    printf("Input Integer value: ");
    scanf("%d",&integer);
    printf("Input Float value: ");
    scanf("%f",&flo);
    printf("Input Double value: ");
    scanf("%lf",&dou);

    printf("\n");
    printf("Character value is %c\n",ch);
    printf("Integer value is %d\n",integer);
    printf("Float value is %.2f\n",flo);
    printf("Double value is %.2lf\n",dou);
    return 0;
}
