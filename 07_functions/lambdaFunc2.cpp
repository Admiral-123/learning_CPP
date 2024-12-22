#include<iostream>
using namespace std;

int main(){

    // store data from lambda func into a var of auto type

    // auto keyword allows the compiler to automatically deduce the type of a variable based on the value it is initialized with

   auto greet = [](string name){
        cout << "hlo " << name << endl;
    };

    greet("varun"); // give in the args

    return 0;
}