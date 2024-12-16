#include <iostream>

using namespace std;

int main(){

    int teaBags;

    cout << "enter the num of tea bags you have: ";
    cin >> teaBags;

    if(teaBags<10){
      teaBags+=5;   //if teabag is less than 10 then add 5 more
    }
    cout << "total num of teabags you have now: "<< teaBags<< endl;
    return 0;
}