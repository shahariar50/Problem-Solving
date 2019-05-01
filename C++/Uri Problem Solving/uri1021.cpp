#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double total{0};
    cin >> total;
    int itotal = total;
    int itotal2 = total;
    cout << "NOTAS:" << endl;
    cout << itotal / 100 << " nota(s) de R$ 100.00" << endl;
    itotal = itotal % 100;

    cout << itotal / 50 << " nota(s) de R$ 50.00" << endl;
    itotal = itotal % 50;

    cout << itotal / 20 << " nota(s) de R$ 20.00" << endl;
    itotal = itotal % 20;

    cout << itotal / 10 << " nota(s) de R$ 10.00" << endl;
    itotal = itotal % 10;

    cout << itotal / 5 << " nota(s) de R$ 5.00" << endl;
    itotal = itotal % 5;

    cout << itotal / 2 << " nota(s) de R$ 2.00" << endl;
    itotal = itotal % 2;
    itotal2 = (total - itotal2) * 100;

    cout << "MOEDAS:" << endl;
    cout << itotal / 1 << " moeda(s) de R$ 1.00" << endl;

    cout << itotal2 / 50 << " moeda(s) de R$ 0.50" << endl;
    itotal2 = itotal2 % 50;

    cout << itotal2 / 25 << " moeda(s) de R$ 0.25" << endl;
    itotal2 = itotal2 % 25;

    cout << itotal2 / 10 << " moeda(s) de R$ 0.10" << endl;
    itotal2 = itotal2 % 10;

    cout << itotal2 / 5 << " moeda(s) de R$ 0.05" << endl;
    itotal2 = itotal2 % 5;

    cout << itotal2 / 1 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}
