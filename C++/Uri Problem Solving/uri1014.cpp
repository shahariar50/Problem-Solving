#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double tl{0}, td{0};
    cin >> td;
    cin >> tl;
    double ttlml{td / tl};
    cout << fixed << setprecision(3) << ttlml << " km/l\n";

    return 0;
}
