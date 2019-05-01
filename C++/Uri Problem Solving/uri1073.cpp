#include <iostream>

using namespace std;

int main()
{
    int num{0};
    cin >> num;
    if(num % 2 == 1){
        num--;
    }
    for(int i{2}; i <= num; i += 2){
        cout << i << "^2 = " << i * i << endl;
    }
    return 0;
}
