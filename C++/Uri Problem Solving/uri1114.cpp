#include <iostream>

using namespace std;

int main()
{
    int password{2002}, inpt{0};

    while(cin >> inpt){
        if(inpt == password){
            cout << "Acesso Permitido\n";
            break;
        }
        else{
            cout << "Senha Invalida\n";
        }
    }

    return 0;
}
