/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x = (-4.5);
    float y = (0.75*pow(10,-4));
    float z = (-0.845*pow(10,2));
    
    double q = pow((9.0 + pow((x - y), 2.0)), 1.0 / 3.0)/(pow(x, 2.0) + pow(y, 2.0) + 2.0)-(exp(abs(x - y))) * pow(tan(z), 3.0);

    cout << q;
}