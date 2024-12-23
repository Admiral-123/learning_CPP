#include <iostream>

using namespace std;

int main(){

    int temperature[5] = {23,41,13,39,28};

    cout << "temperature: ";
    for(int t:temperature){
        cout << t << " ";
    }

    for(int i=0; i<=5; i++){    // if we go out of bound then it'll take any garbage val, which was allocated in the memory previously
        cout << temperature[i] << endl;
    }

    return 0;
}