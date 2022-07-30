#include "oxygenabsorber.h"

OxygenAbsorber::OxygenAbsorber(float height,float width,float lenght,float foodWeight)
{
    this->height=height;
    this->width=width;
    this->lenght=lenght;
    this->foodweight=foodWeight;
}

float OxygenAbsorber::PackageVolume()
{
    return height*width*lenght;
}

float OxygenAbsorber::OxygenAbsorberVolume()
{
    return (PackageVolume() - foodweight)*0.21f;
}

