#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float pi = 3 , r;
    int area ;

    cout << "Bienvenido al programa para calcular el area de un circulo" << endl;

    cout << "Ingrese el radio del circulo: " << endl;
    cin >> r; 
    area = pi * pow(r, 2);
    if (area % 2 == 0)
    {
        cout << "El area del circulo " << area << " es par" << endl;
    }
    
    return 0;
}