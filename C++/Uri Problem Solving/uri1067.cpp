#include <iostream>

using namespace std;

int main()
{
    int input{0};
    cin >> input;

    for(int i{1}; i <= input; i += 2)
        cout << i << endl;

    return 0;
}
