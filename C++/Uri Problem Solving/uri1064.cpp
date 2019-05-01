#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float input{0}, average{0}, total{0};
    int j{0};

    for(int i{0}; i < 6; i++){
        cin >> input;
        if(input > 0){
            total += input;
            j++;
        }
    }
    cout << j << " valores positivos" << endl;
    average = total / j++;

    cout << fixed << setprecision(1) << average << endl;

    return 0;
}
