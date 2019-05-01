#include <iostream>

using namespace std;

int main()
{
    int num1{0}, num2{-2147483648}, sum{0}, i{1};
    cin >> num1;
    while(num1 >= num2 && cin >> num2);

    while(1){
        sum += num1;
        if(sum > num2){
            break;
        }
        num1++;
        i++;
    }

    cout << i << endl;

    return 0;
}
