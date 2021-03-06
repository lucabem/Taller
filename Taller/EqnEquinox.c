#include "EqnEquinox.h"
#include "NutAngles.h"
#include "MeanObliquity.h"
#include <math.h>

/**

    Funcion que calcula de la ecuaci�n de los equinoccios.

    Entrada:
        fechaJulianaModificada

    Salida:
        Ecuacion de equinoccios

    Last modified:   2015/08/12   M. Mahooti

*/
 double eqnEquinox ( double fechaJulianaModificada )
{
    double vectAngulos[2] = {0.0, 0.0};
    NutAngles(fechaJulianaModificada, vectAngulos);
    return vectAngulos[0] * cos(MeanObliquity(fechaJulianaModificada));
}
