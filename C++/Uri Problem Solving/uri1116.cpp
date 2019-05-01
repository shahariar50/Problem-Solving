#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tc{0};
    float x{0}, y{0};

    cin >> tc;

    for(int i{0}; i < tc; i++){
        cin >> x >> y;
        if(y != 0){
            cout << fixed << setprecision(1) << x/y << endl;
        }
        else{
            cout << "divisao impossivel\n";
        }
    }

    return 0;
}
