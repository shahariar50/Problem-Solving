#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x1{0}, x2{0}, y1{0}, y2{0};
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    double position{sqrt(((x2 - x1) * (x2 -x1)) + ((y2 -y1) * (y2 - y1)))};

    cout << fixed << setprecision(4) << position << endl;



 return 0;
}
