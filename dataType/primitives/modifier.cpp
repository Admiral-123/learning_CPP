#include <iostream>

using namespace std;

int main(){

    unsigned smallChipsPack = 15;   // non -ve int only, but if we used -ve int then we'll have a random value (garbage val stored in memory)

    long largeChipsStorage = 1000000000;  // stores big int data
    short chipsSample = 3;      // stores short datas

    __int8 wow = 50;
    

    cout << smallChipsPack << endl;
    cout << largeChipsStorage << endl;
    cout << wow << endl;    // __int8 is treated as signed char, so it'll give val corresponding to ascii char
    cout << chipsSample << endl;

    return 0;
}