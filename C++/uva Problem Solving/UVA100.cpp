#include <iostream>

using namespace std;

int main()
{
    int i{0}, j{0}, n{1}, k{0}, l{0}, trash{0};

    while(cin >> i >> j){
        cout << i << " " << j << " ";
        if(i > j){
            trash = i;
            i = j;
            j = trash;
        }

        while(i <= j){
            k = i;
            while(k != 1){
                if(k % 2 == 1){
                    k = (3 * k) + 1;
                }
                else{
                    k /= 2;
                }
                n++;
            }
            if(n > l){
                l = n;
            }
            n = 1;
            i++;
        }
        cout << l << endl;
    }
    return 0;
}
