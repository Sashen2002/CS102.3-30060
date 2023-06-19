#include <stdio.h>

int main()
{
    float avg,dt,tt;
    printf("Input distance travelled in meters: ");
    scanf("%f",&dt);
    printf("Input time taken in seconds: ");
    scanf("%f",&tt);
    avg=dt/tt;
    printf("Average speed is %.2f meters per second",avg);
    return 0;
}
