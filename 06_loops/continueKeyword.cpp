#include <iostream>
#include <string>

using namespace std;

int main(){

    string teaTypes[5] = {"masala tea","orange tea","green tea", "black tea", "lemon tea"};   // creating arr of tea types

    int numElement = sizeof(teaTypes) / sizeof(teaTypes[0]);
    // sizeof(arr) gives you the total size of the array in bytes

    for(int i=0; i<numElement; i++){
        if(teaTypes[i]=="green tea"){ 
            cout << "skipping " << teaTypes[i] << endl;
            continue;   // skips current iteration
        }
        cout << "brewing.... " << teaTypes[i] << endl;
    }
    return 0;
}