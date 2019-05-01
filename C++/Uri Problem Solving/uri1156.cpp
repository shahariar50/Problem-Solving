#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sum{0};

    for(int i{1}, j{1}; i < 39; i += 2, j += j){
        sum += (double)i / (double)j;
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}
