#include <iostream>

using namespace std;

int main()
{
    int a{0}, n{0}, sum{0};

    cin >> a;
    while(n < 1 && cin >> n);

    for(int i{0}; i < n; i++, a++){
        sum += a;
    }

    cout << sum << endl;

    return 0;
}
