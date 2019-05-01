#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a{0}, b{0}, c{0};
    cin >> a;
    cin >> b;

    c = (a * 3.5 + b * 7.5) / 11;
    cout << "MEDIA = " << fixed << setprecision(5) << c << endl;

    return 0;
}
