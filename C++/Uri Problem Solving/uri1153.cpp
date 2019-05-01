#include <iostream>

using namespace std;

int main()
{
    int inpt{0}, ttl{1};
    cin >> inpt;

    for(int i{1}; i <= inpt; i++){
        ttl *= i;
    }
    cout << ttl << endl;

    return 0;
}
