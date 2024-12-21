#include<iostream>
using namespace std;

int main(){

    string teaTypes[5] = {"masala tea","orange tea","green tea", "black tea", "lemon tea"};   // creating arr of tea types

    int numElement = sizeof(teaTypes) / sizeof(teaTypes[0]);

    for(int i=0; i<numElement; i++){
        cout << "Brewing.... " << teaTypes[i] << " 1" << endl;

        for(int j=2; j<4; j++){
            cout << "Brewing.... " << teaTypes[i] <<" " << j << endl;
        }
    }

    return 0;
}