#include <iostream>

using namespace std;

int main()
{
    int num1{0}, num2{0}, rslt{0};
    while(cin >> num1 >> num2){
        if(num1 <= 0 || num2 <= 0){
            break;
        }
        if(num1 > num2){
            num1 = num1 - num2;
            num2 = num1 + num2;
            num1 = num2 - num1;
        }
        for(;num1 <= num2; num1++){
            cout << num1 << " ";
            rslt += num1;
        }
        cout << "Sum=" << rslt << endl;
        rslt = 0;
    }


    return 0;
}
