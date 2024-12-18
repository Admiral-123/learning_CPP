#include <iostream>

using namespace std;

int main(){

    float time;

    cout << "enter the current hour minutes (0.00 to 23.59) : ";
    cin >> time;        // cant use getline(cin, var) with int/float/double values

    if(time>=8.00 && time<=18.00){
        cout << "shop is open :)" << endl;
    }else{
        cout << "sorry the shop is closed :(" << endl;
    }

    return 0;
}