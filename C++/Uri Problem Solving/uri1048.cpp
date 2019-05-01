#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    double salary{0}, rrate{0};
    cin >> salary;

    if(salary >= 0 && salary <= 400){
        rrate = (salary * 15) / 100;
        cout << "Novo salario: " << fixed << setprecision(2) << salary + rrate << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << rrate << endl;
        cout << "Em percentual: " << fixed << setprecision(2) << 15 << " %" << endl;
    }
    else if(salary > 400 && salary <= 800){
        rrate = (salary * 12) / 100;
        cout << "Novo salario: " << fixed << setprecision(2) << salary + rrate << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << rrate << endl;
        cout << "Em percentual: " << fixed << setprecision(2) << 12 << " %" << endl;
    }
    else if(salary > 800 && salary <= 1200){
        rrate = (salary * 10) / 100;
        cout << "Novo salario: " << fixed << setprecision(2) << salary + rrate << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << rrate << endl;
        cout << "Em percentual: " << fixed << setprecision(2) << 10 << " %" << endl;
    }
    else if(salary > 1200 && salary <= 2000){
        rrate = (salary * 7) / 100;
        cout << "Novo salario: " << fixed << setprecision(2) << salary + rrate << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << rrate << endl;
        cout << "Em percentual: " << fixed << setprecision(2) << 7 << " %" << endl;
    }
    else if(salary > 2000){
        rrate = (salary * 4) / 100;
        cout << "Novo salario: " << fixed << setprecision(2) << salary + rrate << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << rrate << endl;
        cout << "Em percentual: " << fixed << setprecision(2) << 4 << " %" << endl;
    }

    return 0;
}
