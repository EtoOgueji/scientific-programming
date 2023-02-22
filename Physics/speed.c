#include <stdio.h>

int main()
{
    int distance, time;

    int speed;


    printf("Enter distance: \n");
    scanf("%d", distance);

    printf("Enter time: \n");
    scanf("%d", time);

    if (distance != 0 && time != 0)
    {
        speed = distance * time;
    }

    else
    {
        return 0;
    }

    return 0;
}