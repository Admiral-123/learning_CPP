#include<iostream>
using namespace std;

int main(){
    int teaCups;

    cout << "how many cups of tea you want: ";
    cin >> teaCups;

    for(int i=1; i<=teaCups; i++){
        cout << "brewing tea " << i << endl;
    }

    cout << "\nthnx for ordering :)\n";

    return 0;
}