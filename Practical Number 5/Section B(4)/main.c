#include <stdio.h>

int main()
{
    int eno,c,noe=0;
    float sa;
    printf("--Enter '-999',if you prefer to stop the sequence--");
    printf("\n\n");
    do
    {
        printf("Input the employee number: ");
        scanf("%d",&eno);
        if(eno==-999)
        break;
        printf("Input the basic salary: ");
        scanf("%f",&sa);
        if(sa>=5000)
        {
            noe++;
            c++;
        }
    }while(1);
    printf("\nNumber of employees got salaries more than 5000: %d",noe);
    printf("\n\n");
    return 0;
}
