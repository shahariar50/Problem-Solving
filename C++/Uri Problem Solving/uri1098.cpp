#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float i{0}, j{1}, p{0};
    int k{0}, m{0}, n{0};

    while(i <= 2.2){
        m = i;
        p = j;
        for(int l{0}; l < 3; l++){
            n = j;
            if(k % 5 == 0){
                cout << "I=" << m << " " << "J=" << n << endl;
            }
            else{
                cout << "I=" << fixed << setprecision(1) << i << " " << "J=" << fixed << setprecision(1) << j << endl;
            }
            j++;
        }
        k++;
        i += .20;
        j = p + .20;
    }



    return 0;
}
