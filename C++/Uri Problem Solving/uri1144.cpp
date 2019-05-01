#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int x{0}, ttl{0}, y{0};
    cin >> x;


    for(int i{1}; i <= x; i++){
        cout << i << " ";
        for(int j{2}; j <= 3; j++){
            y = pow(i, j);
            cout << y;
            if(j == 3){
                cout << endl;
            }
            else{
                cout << " ";
            }
        }
        cout << i << " ";
        for(int j{2}; j <= 3; j++){
            y = pow(i, j);
            cout << y  + 1;
            if(j == 3){
                cout << endl;
            }
            else{
                cout << " ";
            }
        }
    }

    return 0;
}
