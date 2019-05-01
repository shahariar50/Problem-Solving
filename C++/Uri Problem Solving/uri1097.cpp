#include <iostream>

using namespace std;

int main()
{
    int j{7};
    for(int i{1}; i <= 9; i += 2){
        for(int k{0}; k < 3; j--, k++){
        cout << "I=" << i << " J=" << j << endl;
        }
        j += 5;
    }

    return 0;
}
