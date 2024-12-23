#include<iostream>
using namespace std;

int main(){
    int a=11;
    int* b;
    b=&a;

    cout << b << endl;  // 6422280
    cout << b+1 << endl;    // 6422284   as size of int is 4 bytes so adding 1 to an int pointer would result in jump of 4 in memory address
    cout << *(b+1) << endl;  // b+1 would give a different address as seen previously and dereferncing would give a garbage val
    return 0;
}