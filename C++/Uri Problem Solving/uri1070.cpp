#include <iostream>

using namespace std;

int main()
{
    int input{0};
    cin >> input;
    if(input % 2 == 0)
        input += 1;


    for(int i{input}; i < input + 12; i += 2)
        cout << i << endl;

    return 0;
}
