#include<iostream>
using namespace std;

int main(){

    string response;
    
    while(true){
        cout << "do you want more tea (yes/no): ";
        cin >> response;

        if(response == "no"){
            break;
        }

        cout << "another tea \n";
    }
    cout << "\nthnx" << endl;

    return 0;
}