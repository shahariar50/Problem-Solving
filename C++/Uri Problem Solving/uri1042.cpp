#include <iostream>

using namespace std;

int main()
{
    int arr[3];
    int stb[3];
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];

    // i = 10, 10 , 12

    for(int i = 0, k{2}; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i] < arr[j]){
                k--;
            }
            else if(arr[i] == arr[j] && i != j){
                for(int l{2}; l > 0; l--){
                    if(stb[l] == arr[i]){
                        k = l - 1;
                    }
                }
            }
        }
        stb[k] = arr[i];
        k = 2;
    }
    for(i: stb)
        cout << i << endl;
    cout << endl;
    for(i: arr)
        cout << i << endl;
    return 0;
}
