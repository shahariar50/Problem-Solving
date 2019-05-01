#include <iostream>

using namespace std;

int main()
{
    int num{0}, i{2}, j{1};

    cin >> num;
    int arr[num] = {0, 1};

    for(; i < num; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(i = 0; i < num; i++){
        if(i == num - 1){
            cout << arr[i] << endl;
        }
        else{
            cout << arr[i] << " ";
        }
    }

    return 0;
}
