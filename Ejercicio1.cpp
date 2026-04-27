#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x, y;

    // solicita un numero al usuario
    cout << "Ingrese un numero: " << endl;
    cin >> y;

    x=pow(y,y);
    

    //determine si x es par o impar 

    if (x % 2 == 0)
    {
        cout << "El numero" << x << " es par" << endl;
    }
    else
    {
        cout << "El numero " << x << " es impar" << endl;
    }

    if (y <0 )

    {
        cout << "El numero " << y << " es negativo" << endl;
    }
    else if (y > 0)
    {
        cout << "El numero " << y << " es positivo" << endl;
    }
    else
    {
        cout << "El numero " << y << " es cero" << endl;    
    }
    

    return 0;
}