#include "silicagel.h"

SilicaGel::SilicaGel(float height,float width,float lenght)
{
    this->height=height;
    this->width=width;
    this->length=lenght;
}
float SilicaGel::PackageVolume()
{
    return height*width*length;
}

float SilicaGel::SilicaGelVolume()
{
    return (PackageVolume()/1000)*2;
}


