#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x{0}, ttl{0};
    cin >> x;


    for(int i{1}; i <= x; i++){
        for(int j{1}; j <= 3; j++){
            cout << pow(i, j);
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
