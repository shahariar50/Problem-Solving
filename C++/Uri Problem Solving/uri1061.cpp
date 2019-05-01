#include <iostream>

using namespace std;

int main()
{
    string trash;
    int sDay{0}, shour{0}, smnt{0}, sscnd{0}, eDay{0}, ehour{0}, emnt{0}, escnd{0}, fDay{0}, fhour{0}, fmnt{0}, fscnd{0};
    cin >> trash >> sDay;
    cin >> shour >> trash >>  smnt >> trash >> sscnd;

    cin >> trash >> eDay;
    cin >> ehour >> trash >> emnt >> trash >> escnd;

    fDay = eDay - sDay;
    fscnd = ((emnt * 60) + (ehour * 60 * 60) + escnd) -((smnt * 60) + (shour * 60 * 60) + sscnd);

    if(fscnd < 0){
        fDay--;
        fscnd = fscnd + (24 * 3600);
    }

    cout << fDay << " dia(s)\n";
    int n = fscnd / 3600;
    cout << n << " hora(s)\n";
    fscnd = fscnd % 3600;
    n = fscnd / 60;
    cout << n << " minuto(s)\n";
    cout << fscnd % 60 << " segundo(s)\n";
    return 0;
}
