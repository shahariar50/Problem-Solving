#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double spndtm{0}, ttlspd{0};
    cin >> spndtm;
    cin >> ttlspd;

    double ttltr = spndtm * ttlspd / 12;
    cout << fixed << setprecision(3) << ttltr << endl;
    return 0;
}
