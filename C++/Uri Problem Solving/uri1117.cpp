#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i{0};
    float num{0}, sum{0};

    while(i < 2 && cin >> num){
        if(num >= 0 && num <= 10){
            sum += num;
            i++;
        }
        else{
            cout << "nota invalida\n";
        }
    }
    cout << "media = " << fixed << setprecision(2) << sum / i << endl;

    return 0;
}
