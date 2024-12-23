#include<iostream>
using namespace std;



int totalPeople(int customers[], int size){
    // int arrLen = sizeof(customers) / sizeof(customers[0]); // when arr is passed in a func, it decays into a pointer to its first element, so can't do this

    int total=0;
    for(int i=0; i<size; i++){
        total = total + customers[i];
    }

    return total;

}

int main(){

    int customersThisWeek[7] = {12,15,5,30,64,21,19};

    cout << totalPeople(customersThisWeek, 7);


    return 0;
}