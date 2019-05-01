#include <iostream
#include <iomanip>

using namespace std;

int main()
{
    double customars_data[2][3];

    cin >> customars_data[0][0];
    cin >> customars_data[0][1];
    cin >> customars_data[0][2];
    cin >> customars_data[1][0];
    cin >> customars_data[1][1];
    cin >> customars_data[1][2];

    double total = (customars_data[0][1] * customars_data[0][2]) + (customars_data[1][1] * customars_data[1][2]);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
