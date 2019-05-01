#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float a{0}, b{0}, c{0};
    cin >> a;
    cin >> b;
    cin >> c;

    float x1, x2, x3, x4;
    x3 = (b * b) - (4 * a * c);

    if (x3 < 0 || (a * b * c) == 0){
        cout << "Impossivel calcular" << endl;
    }
    else{
        x1 = (-b + sqrt(x3)) / (2 * a);
        cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
        x2 = (-b - sqrt(x3)) / (2 * a);
        cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
    }
    return 0;
}
