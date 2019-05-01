#include <iostream>
#include <iomanip>

using namespace std;

main()
{
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "TRIANGULO: " << fixed << setprecision(3) << a * c * 0.5 << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << 3.14159 * c * c << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << .5 * (a + b) * c << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << b * b << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << a * b << endl;

    return 0;
}
