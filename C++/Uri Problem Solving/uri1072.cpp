#include <iostream>

using namespace std;

int main()
{
    int in{0}, out{0}, tc{0}, num{0};
    cin >> tc;

    for(int i{0}; i < tc; i++){
        cin >> num;
        if(num <= 20 && num >= 10){
            in++;
        }
        else{
            out++;
        }
    }
    cout << in << " in\n" << out << " out\n";
    return 0;
}
