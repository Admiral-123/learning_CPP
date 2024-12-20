#include<iostream>

using namespace std;

int main(){

    int teaCups;

    cout << "enter the num of tea cups you want: ";
    cin >> teaCups;

    while(teaCups>0){
        teaCups--;
        cout << "your tea \n" << "remaining: " << teaCups  << endl;
    }

    cout << "\nthnx for ordering :)" << endl;

    return 0;
}