#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double a{0}, r{0};
    cin >> r;
    a = 3.14159 * (r * r);
    cout << "A=" << fixed << setprecision(4) << a << endl;
    return 0;
}
