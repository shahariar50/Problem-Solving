#include <iostream>

using namespace std;

int main()
{
    int x{0}, y{0};

    while(cin >> x >> y){
        if(x == 0 || y == 0){
            break;
        }
        else if(y > 0 && x > 0){
            cout << "primeiro\n";
        }
        else if(x < 0 && y > 0){
            cout << "segundo\n";
        }
        else if(x < 0 && y < 0){
            cout << "terceiro\n";
        }
        else if(x > 0 && y < 0){
            cout << "quarto\n";
        }
    }

    return 0;
}
