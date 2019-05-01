#include <iostream>

using namespace std;

int main()
{
    int sec{0}, n{0};
    cin >> sec >> n;

    for(int i{1}; i <= n; i++){
        cout << i;
        if(i % sec == 0){
            cout << "\n";
        }
        else{
            cout << " ";
        }


    }

    return 0;
}
