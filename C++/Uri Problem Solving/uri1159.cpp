#include <iostream>

using namespace std;

int main()
{
    int num{1}, sum{0};

    while(cin >> num && num != 0){
        if(num % 2 == 1 || num % 2 == -1){
            num++;
        }
        for(int i{0}; i < 5; i++, num += 2){
            sum += num;
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
