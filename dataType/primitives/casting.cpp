#include <iostream>

using namespace std;

int main(){

    float chipsPrice = 49.99;

    int roundedChipsPrice = (int) chipsPrice;       // casting will remove all precesion val.

    int chipsQuantity = 13;
    float totalPrice = chipsPrice * chipsQuantity;

    cout << roundedChipsPrice;
    cout << totalPrice;

    return 0;
}