#include <iostream>

using namespace std;

int main()
{
    int input{0}, even{0}, odd{0}, pos{0}, neg{0};

    for(int i{0}; i < 5; i++){
        cin >> input;

        if(input % 2 == 0){
            even++;
        }
        else if(input % 2 == 1 || input % 2 == -1){
            odd++;
        }
        if(input > 0){
            pos++;
        }
        else if(input < 0){
            neg++;
        }
    }
    cout << even << " valor(es) par(es)\n";
    cout << odd << " valor(es) impar(es)\n";
    cout << pos << " valor(es) positivo(s)\n";
    cout << neg << " valor(es) negativo(s)\n";

    return 0;
}
