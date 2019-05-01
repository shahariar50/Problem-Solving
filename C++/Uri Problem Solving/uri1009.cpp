#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string a;
    getline(cin, a);
    double salary{0}, ttl_sell{0};
    cin >> salary;
    cin >> ttl_sell;
    double ttl_salary{(ttl_sell * .15) + salary};
    cout << "TOTAL = R$ " << fixed << setprecision(2) << ttl_salary << endl;
    return 0;
}
