#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a{0}, b{0};
    double c{0}, total{0};

    cin >> a;
    cin >> b;
    cin >> c;

    cout << "NUMBER = " << a << endl;
    total = b * c;
    cout << "SALARY = U$ " << fixed << setprecision(2) << total << endl;
    return 0;
}
