#ifndef OXYGENABSORBER_H
#define OXYGENABSORBER_H


class OxygenAbsorber
{
public:
    OxygenAbsorber(float,float,float,float);
    float PackageVolume();
    float OxygenAbsorberVolume();
private:
    float height,width,lenght,foodweight;
};

#endif // OXYGENABSORBER_H
