#include <iostream>

using namespace std;

int main(){

    int choice;
    int price;

    cout << "what tea you want ?"<< endl;
    cout << "1 for green tea, 2 for masala chai, 3 for lemon tea, 4 for ice tea : ";
    cin >> choice;

    switch (choice)
    {
        case 1: 
            price=30;
            cout << "you selected green tea price is " << price << endl;
        break;

        case 2:
            price=15;
            cout << "you selected masala chai, price is " << price << endl;
            break;

        case 3:
            price=15;
            cout << "you selected lemon tea, price is " << price << endl;
            break;

        case 4:
            price=20;
            cout << "you selected ice tea, price is " << price << endl;
            break;
    
    default:
        cout << "invalid choice" << endl;
        break;
    }

    return 0;
}