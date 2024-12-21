#include <iostream>

using namespace std;

float checkWeightInKg(float weightInPound){
    return weightInPound/2.2;
}

void wow(int times);   // declare the fn before main() later we can define it after main()
// parameters when defining func, argument when calling func

void wow(int times, string name){   // use same func name with diff parameters
    for(int i=0; i<times; i++){
        cout << "wow " << name << endl;
    }
}

int main(){
     
    cout << checkWeightInKg(10.0) << endl;
    wow(5);
    wow(3, "alex");
    return 0;
}

void wow(int times){
    for(int i=0; i<times; i++){
        cout << "wow" << endl;
    }
}
