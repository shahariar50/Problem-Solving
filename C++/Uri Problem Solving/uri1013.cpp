#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a{0}, b{0}, c{0};
    cin >> a;
    cin >> b;
    cin >> c;
    int maiorAB{(a + b + abs(a - b)) / 2};
    int biggest{(maiorAB + c + abs(maiorAB - c)) / 2};


    cout << biggest << " eh o maior" << endl;
    return 0;
}
