#include <iostream>

using namespace std;

int main()
{
    double a[6], b{0};
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    cin >> a[3];
    cin >> a[4];
    cin >> a[5];

    for(int i{0}; i < 6; i++){
        if(a[i] >= 0){
            b++;
        }
    }
    cout << b << " valores positivos\n";
    return 0;
}
