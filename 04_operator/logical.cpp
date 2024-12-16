#include <iostream>

using namespace std;

int main(){

    int cup;
    int costPerCup = 10;
    double totalCost;
    bool isStudent;

    cout << "Are you a student? (1 for yes 0 for no) : ";
    cin >> isStudent;

    cout << "How many cup of tea : ";
    cin >> cup;
    totalCost = costPerCup*cup;


    if(cup>15 || isStudent){

        totalCost = totalCost - (totalCost*0.1);
        cout << "congratulation you got a special discount \n" ;
    }
    cout << "your total price : "<<totalCost;

    return 0;
}