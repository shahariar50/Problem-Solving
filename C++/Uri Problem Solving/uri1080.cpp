#include <iostream>

using namespace std;

int main()
{
    int n{0}, maxn{0}, maxp{0};

    for(int i{1}; i <= 100; i++){
        cin >> n;

        if(n >= maxn){
            maxn = n;
            maxp = i;
        }
    }
    cout << maxn << endl << maxp << endl;


    return 0;
}
