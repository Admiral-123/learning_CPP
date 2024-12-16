#include <iostream>

using namespace std;

int main(){
    int cups;
    double pricePerCups, totalPrice, discountedPrice;

    cout << "enter the no. of tea cups \n";
    cin >> cups;

    cout << "enter price per cup \n";
    cin >> pricePerCups;

    totalPrice = cups*pricePerCups;

    if(totalPrice>100){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "discounted price " << discountedPrice << endl;
    }else{ 
        cout << "total price "<< totalPrice << endl;
        }

    return 0;
}