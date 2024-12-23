#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << &a << endl;     // memory address of a

    int* b = new int;     // Allocating memory dynamically for an integer
    cout << b << endl;    // Printing the value of the pointer (the address it holds)
    cout << &b << endl;   // Printing the address of the pointer itself

    *b=23;      // Dereferencing 'b' to store the value 23 in the allocated memory

    cout << *b << endl; // Dereference b to get the value stored at the allocated memory  (val stored at b)

    delete b;   // clean 'b' from the heap 

    return 0;
}