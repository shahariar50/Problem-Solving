#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double r;
    cin >> r;
    double result = (4.0 / 3) * 3.14159 * r * r * r;
    cout << "VOLUME = " << fixed << setprecision(3) << result << endl;

    return 0;
}
