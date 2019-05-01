#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int y, z;
    double x[] = {4.00, 4.50, 5.00, 2.00, 1.50}, total;

    cin >> y;
    cin >> z;

    total = x[y - 1] * z;

    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
