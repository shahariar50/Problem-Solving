#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a{0}, b{0}, c{0}, d{0};

    cin >> a;
    cin >> b;
    cin >> c;

    d = (a * 2 + b * 3 + c * 5) / 10;

    cout << "MEDIA = " << fixed << setprecision(1) << d << endl;
    return 0;
}
