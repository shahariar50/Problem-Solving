#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i{0}, x{0};
    bool rslt;
    float num{0}, sum{0};

    do{
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
        sum = 0;
        while(true){
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> x;
            if(x == 1){
                rslt = true;
                break;
            }
            else if(x == 2){
                rslt = false;
                break;
            }
        }
        i = 0;
    }while(rslt == true);

    return 0;
}
