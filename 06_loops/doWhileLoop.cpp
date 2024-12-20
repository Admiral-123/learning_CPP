#include<iostream>

using namespace std;

int main(){

    string response;

    do{
        cout << "do you want more tea? 'no' or 'yes': ";
        cin >> response;
        
    }while(response == "yes" || response == "Yes" || response == "YES");

    return 0;
}