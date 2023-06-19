#include <stdio.h>

int main()
{
    char name[20];
    int byear,age;
    printf("Enter first of ur name: ");
    scanf(" %s",&name);
    printf("Enter ur birthyear: ");
    scanf("%d",&byear);
    age=2023-byear;
    printf("Student Name: %s\n",name);
    printf("Age: %d\n",age);

    return 0;
}
