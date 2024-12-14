#include <iostream>

using namespace std;

int main(){
    int runs = 147;
    float overs = 31.2;
    double runRate = 4.70;
    char group = 'B';
    bool isKnockout = false;        // false is represented as 0 and +ve nonzero num are considered as true
    bool x = 3;     // true
    bool y ='a';    // true
    bool z = 0;     // false
    //bool n = '';  cant have null '' in bool

    cout << isKnockout << endl;
    cout << x   << endl;
    cout << y   << endl;
    cout << z   << endl;
    //cout << n   << endl;

    return 0;
}