#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str, str2;
    getline(cin, str);

    for(int i{0};i < str.size(); i++){
        if(str[i] == ','){
            cout << endl;
        }
        else{
            cout << str[i];
        }
    }

    return 0;
}
