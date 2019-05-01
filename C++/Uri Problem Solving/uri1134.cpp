#include <iostream>

using namespace std;

int main()
{
    int inpt{0}, alc{0}, gas{0}, die{0};

    while(cin >> inpt){
        if(inpt == 1){
            alc++;
        }
        else if(inpt == 2){
            gas++;
        }
        else if(inpt == 3){
            die++;
        }
        else if(inpt == 4){
            break;
        }
    }
    cout << "MUITO OBRIGADO\n" << "Alcool: " << alc << endl << "Gasolina: " << gas << endl << "Diesel: " << die << endl;

    return 0;
}
