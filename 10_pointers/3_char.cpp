#include<iostream>
using namespace std;

int main(){
    char* a;
    cout << a <<endl;
    char b = 'b';
    a = &b;
    cout << a << endl;
    cout << &a << endl;
    cout << *a << endl;
    
    return 0;
}