#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float num1{0}, num2{0}, num3{0}, tc{0}, avr{0};
    cin >> tc;

    for(int i{0}; i < tc; i++){
        cin >> num1 >> num2 >> num3;

        avr = (num1 * 2 + num2 * 3 + num3 * 5) / 10;

        cout << fixed << setprecision(1) << avr << endl;
    }

    return 0;
}
