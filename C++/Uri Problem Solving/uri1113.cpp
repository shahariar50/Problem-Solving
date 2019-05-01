#include <iostream>

using namespace std;

int main()
{
    int num1{0}, num2{0};

    while(cin >> num1 >> num2){
        if(num1 > num2){
            cout << "Decrescente\n";
        }
        else if(num1 < num2){
            cout << "Crescente\n";
        }
        else if(num1 == num2){
            break;
        }
    }

    return 0;
}
