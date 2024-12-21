#include<iostream>
using namespace std;


void hlo(int &times){   // use & in params if you want to also change the val of the var passed into func
    times+=5;
    cout << times << endl;
}

int main(){
    int timeVal = 3;
    hlo(timeVal);   // call by ref

    cout << "timeVal " << timeVal << endl;
    return 0;
}