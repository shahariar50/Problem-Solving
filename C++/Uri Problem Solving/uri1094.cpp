#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tc{0}, num{0}, rabbit{0}, rat{0}, frog{0};
    char aniname{0};
    cin >> tc;


    for(int i{0}; i < tc; i++){
        cin >> num >> aniname;

        if(aniname == 'C'){
            rabbit += num;
        }
        else if(aniname == 'R'){
            rat += num;
        }
        else{
            frog += num;
        }
    }
    int total = rabbit + rat + frog;
    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << rabbit << endl;
    cout << "Total de ratos: " << rat << endl;
    cout << "Total de sapos: " << frog << endl;

    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (float)rabbit * 100 / total << " %\n";
    cout << "Percentual de ratos: " << fixed << setprecision(2) << (float)rat * 100 / total << " %\n";
    cout << "Percentual de sapos: " << fixed << setprecision(2) << (float)frog * 100 / total << " %\n";
    return 0;
}
