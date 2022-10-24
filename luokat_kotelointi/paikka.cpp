#include <iostream>
#include "paikka.h"

Paikka::Paikka()
{}

void Paikka::setLatLong(double latitude, double longitude)
{
    this->latitude = latitude;
    this->longitude = longitude;
}

double Paikka::getLat()
{
    return latitude;
}

double Paikka::getLong()
{
    return longitude;
}