#include<iostream>
using namespace std;


void hlo(int times){
    times+=5;
    cout << times << endl;
}

int main(){
    int timeVal = 3;
    hlo(timeVal);   // call by val

    cout << "timeVal " << timeVal << endl;
    return 0;
}