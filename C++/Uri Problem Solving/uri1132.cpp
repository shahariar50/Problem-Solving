#include <iostream>

using namespace std;

int main()
{
    int x{0}, y{0}, sum{0};

    cin >> x >> y;
    if(x > y){
        x -= y;
        y += x;
        x = y - x;
    }

    for(; x <= y; x++){
        if(x % 13 != 0){
            sum += x;
        }
    }
    cout << sum << endl;

    return 0;
}
