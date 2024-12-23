#include<iostream>
using namespace std;


int* learnPointer(int num){
    int* order = new int[num];  // allocate into dynamic memory
    // new int[num] does not return the array itself. Instead, it returns a pointer
    for(int i=0; i<num; i++){
        order[i] = (i+1) * 10;
    }

    return order;
}


int main(){
    int value = 5;
    int* result = learnPointer(5);

    for(int i=0; i<value; i++){
        cout << result[i] << endl;
    }

    delete[] result;    // clean the heap after running the program
    // whenever we use 'new' then use 'delete'

    return 0;
}