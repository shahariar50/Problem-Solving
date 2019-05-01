#include <iostream>

using namespace std;

int main()
{
    int tc{0}, num{0};

    cin >> tc;

    for(int i{0}; i < tc; i++){
        cin >> num;
        if(num > 0){
            if(num % 2 == 0){
                cout << "EVEN POSITIVE\n";
            }
            else{
                cout << "ODD POSITIVE\n";
            }
        }
        else if(num < 0){
            if(num % 2 == 0){
                cout << "EVEN NEGATIVE\n";
            }
            else{
                cout << "ODD NEGATIVE\n";
            }
        }
        else{
            cout << "NULL\n";
        }
    }


    return 0;
}
