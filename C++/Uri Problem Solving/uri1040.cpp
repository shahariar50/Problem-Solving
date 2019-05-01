#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n1{0}, n2{0}, n3{0}, n4{0}, n5{0}, o{0}, media{0}, media_final{0};

    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;
    cout << "Media: " << fixed << setprecision(1) << media << endl;



    if(media >= 7){
        cout << "Aluno aprovado.\n";
    }
    else if(media < 5){
        cout << "Aluno reprovado.\n";
    }
    else{
        cout << "Aluno em exame.\n";
        cin >> n5;
        cout << "Nota do exame: " << fixed << setprecision(1) << n5 << endl;
        media_final = (n5 + media) / 2;
        if(media_final >= 5){
            cout << "Aluno aprovado.\n";
        }
        else if(media_final < 5){
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << fixed << setprecision(1) << media_final << endl;
    }
    return 0;
}
