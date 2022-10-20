#include <iostream>
using namespace std;

class Point
{
    

    public:
    double x, y;
    Point()
    {
        alustaPoint();
    }

     Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    void alustaPoint()
    {
        x=0;
        y=0;
    }
};
class Vector

{
        private: //Yksityiset jäsenmuuttujat
        double x0;
        double y0;
        double x1;
        double y1;


        public: //Julkiset jäsenfunktiot

        //Perusrakentaja, alustaa arvot 0:lla
        Vector()
        {
            alustaVektori();
        }

            //Rakentaja, alustaa arvot parametreilla
        Vector(double x0, double y0, double x1, double y1)
        {
            this->x0 = x0;
            this->y0 = y0;
            this->x1 = x1;
            this->y1 = y1;
        }

          Vector(Point start, Point end)
        {
            this->x0 = start.x;
            this->y0 = start.y;
            this->x1 = end.x;
            this->y1 = end.y;
        }


            //Rakentaja, kopioi arvot toisesta olios
        Vector(Vector& v)
        {
            this->x0 = v.x0;
            this->y0 = v.y0;
            this->x1 = v.x1;
            this->y1 = v.y1;
        }

        //MUUT
        void tulostaVektori()
        {
            cout << "start:" << x0 << "," << y0 << " end:" << x1 << "," << y1 << endl;
        }

        void alustaVektori()
        {
            x0 = 0;
            y0 = 0;
            x1 = 0;
            y1 = 0;

            tulostaVektori();
        }

        //HUOMAA, jos parametrit ovat samannimiset kuin jäsenmuuttujat
        // viitataan jäsenmuuttujiin this-> operaatiolla
        void aseta(double x0, double y0, double x1, double y1)
        {
            this->x0 = x0;
            this->x1 = x1;
            this->y0 = y0;
            this->y1 = y1;
        }



}; // <-- HUOM! Luokan määrittely päättyy ;


int main()
{
    Vector v1; //Olio v1



    //v1.x = 0; << EI SALLITTU ENÄÄ

    //v1.alustaVektori();

    v1.aseta(5,5,10,10);
    v1.tulostaVektori();


    Vector v2(v1); //Alustetaan uusi vektori V1 arvoilla
    v2.tulostaVektori();


    Vector v3(1,2,4,6); //Alustetaan uusi määritetyillä arvoilla
    v3.tulostaVektori();

    Point start(10, 20);
    Point end(20, 30);

    Vector v4(start, end);

    v4.tulostaVektori();

}