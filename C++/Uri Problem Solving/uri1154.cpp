#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double inpt{0}, total{0};
    int i{0};

    while(cin >> inpt){
        if(inpt < 0){
            break;
        }
        total += inpt;
        i++;
    }
    cout << fixed << setprecision(2) << total / i << endl;

    return 0;
}
