#ifndef SILICAGEL_H
#define SILICAGEL_H


class SilicaGel
{
public:
    SilicaGel(float,float,float);
    float PackageVolume();
    float SilicaGelVolume();

private:
    float length,width,height;
};

#endif // SILICAGEL_H
