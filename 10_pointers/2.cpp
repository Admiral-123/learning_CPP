#include<iostream>
using namespace std;

int main(){

    int a=12;
    int* b = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;      // the address it holds
    cout << *b << endl;     // this means the value inside of the address it holds

    *b=16;  // this value 16 will go inside address of 'a' as 'b' holds address of a
    cout << a << endl;
    cout << b << endl;

    return 0;
}