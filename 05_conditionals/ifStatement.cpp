#include <iostream>
#include <string>

using namespace std;

int main(){

    string tea;

    cout << "what tea do you want? : ";
    getline(cin, tea);

    if(tea == "green tea" || tea == "Green Tea" || tea == "Green tea"){
        cout << "your order is confirmed";
    }
    

    return 0;
}