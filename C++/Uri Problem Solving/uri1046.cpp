#include <iostream>

using namespace std;

int main()
{
    int a{0}, b{0};

    cin >> a;
    cin >> b;

    if(a >= b)
        cout << "O JOGO DUROU " << b + 24 - a << " HORA(S)\n";
    else
        cout << "O JOGO DUROU " << b - a << " HORA(S)\n";

    return 0;
}
