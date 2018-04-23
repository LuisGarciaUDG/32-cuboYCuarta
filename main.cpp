/* programa_32 Calcular la potencia tercera y cuarta de un numero
estructura: ciclica for
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 5 de marzo del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int x;
    double a, b;

    cout<<"\n\t Calculadora de potencias cubica y cuarta \n\n";

    for (x=0; x<=4; x=x+1)
    {
    cout<<"\tNumero a calcular: ";
    cin>>a;
    b=a;
    cout<<"\n\n\tNumero capturado: "<<a<<"\n\n";
    a= pow (a,3);
    cout<<"\tPotencia cubica: "<<a<<"\n\n";
    b= pow (b,4);
    cout<<"\tPotencia cuarta: "<<b<<"\n\n";
    cout<<"\n\n";
    }

    cout<<"\n\tHasta pronto...\n\n\t\t\t";
    system ("pause");

    return 0;
}
