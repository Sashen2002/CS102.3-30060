#include <stdio.h>

int main()
{
    //Using If else statement
    int n1;
    printf("Enter a number: ");
    scanf("%d",&n1);

    if(n1%2==0)
    {
    printf("%d is an even number",n1);
    }
    else
    {
    printf("%d is a odd number",n1);
    }
    printf("\n\n");


    //Using Switch statement

    int n2;
    printf("Enter a number: ");
    scanf("%d",&n2);

    switch(n2%2)
    {
        case 0: printf("%d is an even number.\n",n2); break;
        case 1: printf("%d is an odd number.\n",n2); break;
        default: printf("Invalid number");
    }

}
