#include <iostream>

using namespace std;

int main()
{
    int tc{0}, num1{0}, num2{0}, sum{0};
    cin >> tc;

    for(int i{0}; i < tc; i++){
        cin >> num1 >> num2;
        if(num1 % 2 == 0){
            num1++;
        }
        sum = 0;
        for(int j{0}; j < num2; j++, num1 += 2){
            sum += num1;
        }
        cout << sum << endl;
    }

    return 0;
}
