#include <iostream>

using namespace std;

int main(){

    int cups;


    cout << "enter the number of cups" << endl;
    cin >> cups;

    if(cups>20){
        cout << "congratulation you won a GOLD badge" << endl;
    }else if(cups>=10 && cups<=20){
        cout << "congratulation you won a SILVER badge" << endl;
    }else{
        cout << "you ordered "<< cups << " cups" << endl;
    }

    return 0;
}