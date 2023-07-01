#include <stdio.h>

int main()
{
    int counter=65;
    while(counter<=90 && counter>=65)
    {
        printf("ASCII value of %c is %d,\n",counter,counter);
        counter++;
    }
    return 0;
}
