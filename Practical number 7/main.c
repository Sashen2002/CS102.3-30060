#include <stdio.h>

int main()
{
    int A[3][3]={3,2,4,1,4,6,4,3,2},B[3][3]={2,6,3,4,3,2,5,1,7},sum[3][3];
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            for(int x=0;x<3;x++)
            {
                sum[y][x]=A[y][x]+B[y][x];
            }
        }
    }
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            sum[x][y]=A[x][y]+B[x][y];
        }
    }
    printf("\n");
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("%4d ",sum[x][y]);
        }
        printf("\n");
    }
    return 0;
}
