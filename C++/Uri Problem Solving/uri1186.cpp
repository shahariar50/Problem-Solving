#include <iostream>

using namespace std;

int main()
{
    int tc{0}, num{0}, sum{0};
    cin >> tc;

    for(int i{0}; i < tc; i++){
        cin >> num;
        sum = 0;
        for(int j{0}; j < num; j++){
            if(j % 2 == 0){
                sum++;
            }
            else{
                sum--;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
