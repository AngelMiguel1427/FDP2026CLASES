#include <iostream>
using namespace std;

int main()
{
    float temperatura;

    cout << "Ingrese la temperatura en grados Celsius: " << endl;
    cin >> temperatura;

    if (temperatura < 20)
    {
        cout << "El agua esta fria" << endl;
    }
    else if (temperatura >= 20 && temperatura <= 30)
    {
        cout << "El agua esta templada" << endl;
    }
    else
    {
        cout << "El agua esta caliente" << endl;
    }

    return 0;
}