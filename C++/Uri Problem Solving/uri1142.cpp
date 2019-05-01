#include <iostream>

using namespace std;

int main()
{
    int inpt{0}, i{1};
    cin >> inpt;

    for(int j{0}; j < inpt; j++){
        for(int k{0}; k < 3; k++, i++){
            cout << i << " ";
        }
        cout << "PUM\n";
        i++;
    }

    return 0;
}
