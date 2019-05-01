#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a{0}, b{0}, c{0}, total;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a + b > c && b + c > a && c + a > b){
        cout << "Perimetro = " << fixed << setprecision(1) << a + b + c << endl;
    }
    else{
        cout << "Area = " << fixed << setprecision(1) << ((a + b) / 2) * c << endl;
    }
    return 0;
}
