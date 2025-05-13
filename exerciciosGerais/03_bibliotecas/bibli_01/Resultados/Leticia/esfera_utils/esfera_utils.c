#include "esfera_utils.h"
#include <math.h>

float calcula_volume (float R)
{
    float volume = (4/3.0) * PI * pow(R,3);
    return volume;
}

float calcula_area (float R)
{
    float area = 4 * PI * pow(R,2);
    return area;
}
