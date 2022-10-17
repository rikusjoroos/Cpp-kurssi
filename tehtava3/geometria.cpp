#include "geometria.h"
#include <iostream>
#define PII 3.14159

int geometria::kolmionAla(int a, int b)
{
    return a*b/2;
}

float geometria::ympyranAla(int sade)
{
    return PII * sade * sade;
}