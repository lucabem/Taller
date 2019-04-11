#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "MatlabUtilities.h"

void Test_Norma();
void Test_Sign();
void Test_Cross();
void Test_Dot();
void Test_Det();
void Test_Multiplicacion();

bool fequal(double a, double b);

const double epsilon = 0.001;

int main()
{
    Test_Norma();
    Test_Sign();
    Test_Cross();
    Test_Dot();
    Test_Det();
    Test_Multiplicacion();

    printf(">>> TESTS MATLABUTILITIES SUPERADOS \n");
    return 0;
}

void Test_Norma()
{
    double v1[3] = {0.0, 0.0, 0.0};
    double r1 = Norma(v1);
    assert(fequal(0.0, r1) == true);

    double v2[3] = {1, 1, 1};
    double r2 = Norma(v2);
    assert(fequal(1.73205, r2) == true);

    double v3[3] = {4.0, 3.0, 0.0};
    double r3 = Norma(v3);
    assert(fequal(5.0, r3) == true);
}

void Test_Sign()
{
    assert(Sing(0.0) == 0);
    assert(Sing(1.5) == 1);
    assert(Sing(-0.5) == -1);
}

void Test_Cross()
{

    double v1[3] = {4.0, -2.0, 1.0};
    double v2[3] = {1.0, -1.0, 3.0};

    double* resultado = cross(v1, v2);

    assert(fequal(resultado[0], -5.00) == true);
    assert(fequal(resultado[1], -11.00) == true);
    assert(fequal(resultado[2], -2.00) == true);

    double v3[3] = {0.25, -2.75, 12.2223};
    double v4[3] = {1.045, -1.12, 3.5};

    resultado = cross(v3, v4);

    assert(fequal(resultado[0], 4.064) == true);
    assert(fequal(resultado[1], 11.8973) == true);
    assert(fequal(resultado[2], 2.5938) == true);
}

void Test_Dot()
{
    double v1[3] = {4.0, -1.0, 2.0};
    double v2[3] = {2.0, -2.0, -1.0};
    assert(fequal(dot(v1, v2), 8) == true);
}

void Test_Det()
{
    double matrix[3][3] = {{1, -2, 4}, {-5,2,0}, {1,0,3}};
    double determinante = det(3, matrix);

    assert(fequal(determinante, -32 ) == true);

    double matrix2[3][3] = {{1.056, -2.778, 4.123}, {-5.35, 2.67, 0.5}, {1.11, 0, 3.23}};
    double determinante2 = det(3, matrix2);

    assert(fequal(determinante2, -52.6593 ) == true);


}

void Test_Multiplicacion(){
    double a[3][3] = {{1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {0.0, 0.0, 1.0}};
    double c[3][3] = {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}};

    multiplicacion(a, a, c);

    double b[3][3] = {{1.056, -2.778, 4.123}, {-5.35, 2.67, 0.5}, {1.11, 0, 3.23}};
    double d[3][3] = {{10.1220, 0.0, -12.34560}, {0.25, -2.75, 12.2223}, {-5.35, 2.67, 0.5}};
    double f[3][3] = {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}};

    multiplicacion(b,d, f);

}


bool fequal(double a, double b)
{
    return fabs(a-b) < epsilon;
}



