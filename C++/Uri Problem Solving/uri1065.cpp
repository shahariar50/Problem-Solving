#include <iostream>

using namespace std;

int main()
{
    int input{0}, even{0};

    for(int i{0}; i < 5; i++){
        cin >> input;

        if(input % 2 == 0){
            even++;
        }
    }
    cout << even << " valores pares" << endl;

    return 0;
}
