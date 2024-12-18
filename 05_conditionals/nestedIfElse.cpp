#include <iostream>

using namespace std;

int main(){

    int pricePerCup = 10;
    int orderCups;
    float discountRate;
    int totalPrice;

    cout << "how many cups you want ? : ";
    cin >> orderCups;

    if(orderCups>20){
        discountRate = 0.2;
    }else if(orderCups<=20 && orderCups>=10){
        discountRate = 0.1;
    }else{
        discountRate = 0;
    }

    cout << "so your total bill is " <<(orderCups*pricePerCup)-(orderCups*pricePerCup*discountRate) << endl;

    return 0;
}