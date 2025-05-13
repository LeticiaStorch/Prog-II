#include "esfera_utils.h"
#include <stdio.h>

int main()
{
    float R;
    scanf("%f\n", &R);

    float area = calcula_area(R);
    float volume = calcula_volume(R);

    printf("Area: %.2f\nVolume: %.2f\n", area, volume);
}