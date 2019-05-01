#include <iostream>

using namespace std;

int main()
{
    int x{0};

    while(cin >> x){
        if(x == 0){
            break;
        }
        for(int i{1}; i <= x; i++){
            cout << i;
            if(i == x){
                cout << endl;;
            }
            else{
                cout << " ";
            }
        }
    }

    return 0;
}
