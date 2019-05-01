#include <iostream>

using namespace std;

int main()
{
    int num1{0}, num2{0};
    cin >> num1 >> num2;

    if(num1 > num2){
        num1 -= num2;
        num2 += num1;
        num1 = num2 - num1;
    }
    num1++;
    for(; num1 < num2; num1++){
        if(num1 % 5 == 2){
            cout << num1 << endl;
        }
        else if(num1 % 5 == 3){
            cout << num1 << endl;
        }
    }
    return 0;
}
