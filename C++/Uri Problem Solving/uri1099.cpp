#include <iostream>

using namespace std;

int main()
{
    int tc{0}, num1{0}, num2{0}, trsh{0}, total{0};
    cin >> tc;
    for(int i{0}; i < tc; i++){
        cin >> num1 >> num2;
        if(num1 > num2){
            num1 = num1 - num2;
            num2 = num1 + num2;
            num1 = num2 - num1;
        }
        num1 += 1;
        for(; num1 < num2; num1++){
            if(num1 % 2 == 1){
                total += num1;
            }
        }
        cout << total << endl;
        total = 0;
    }


    return 0;
}
