#include <iostream>

using namespace std;

int main()
{
    int sh{0}, sm{0}, fh{0}, fm{0}, ttlm{0};

    cin >> sh;
    cin >> sm;
    cin >> fh;
    cin >> fm;

    sm = sh * 60 + sm;
    fm = fh * 60 + fm;

    if(sm >= fm){
        ttlm = fm + (24 * 60) - sm;

        cout << "O JOGO DUROU " << ttlm / 60 << " HORA(S) E " << ttlm % 60 << " MINUTO(S)\n";
    }
    else{
        ttlm = fm - sm;

        cout << "O JOGO DUROU " << ttlm / 60 << " HORA(S) E " << ttlm % 60 << " MINUTO(S)\n";
    }

    return 0;
}
