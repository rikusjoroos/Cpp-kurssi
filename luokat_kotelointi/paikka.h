#ifndef PAIKKA_H
#define PAIKKA_H

class Paikka
{
    private:
    double latitude;
    double longitude;

    public:
    Paikka();
   

    void setLatLong(double latitude, double longitude);
    double getLat();
    double getLong();
    
};

#endif