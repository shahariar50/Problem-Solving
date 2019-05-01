#include <iostream>

using namespace std;

class Game{
public:
    int score{0};


};

int main()
{
    Game gremio;
    Game inter;
    int ttlgm{0}, num1, num2, draw{0}, wannot{1};

    while(wannot == 1 && cin >> num1 >> num2){
            if(num1 > num2){
                inter.score++;
            }
            else if(num1 < num2){
                gremio.score++;
            }
            else{
                draw++;
            }
        ttlgm++;

        while(true){
            cout << "Novo grenal (1-sim 2-nao)\n";
            cin >> wannot;
            if(wannot == 1 || wannot == 2){
                break;
            }
        }
    }
    cout << ttlgm << " grenais\n" << "Inter:" << inter.score << endl << "Gremio:" << gremio.score << endl << "Empates:" << draw << endl;
    if(inter.score > gremio.score){
        cout << "Inter venceu mais\n";
    }
    else if(inter.score < gremio.score){
        cout << "Gremio venceu mais\n";
    }
    else{
        cout << "Nao houve vencedor\n";
    }

    return 0;
}
