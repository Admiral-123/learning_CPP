#include <iostream>

using namespace std;

int main(){
    // lambda function-> func which has no name;

    //use [] to declare lambda func
    [](int num){
        for(int i=0; i<num; i++){
            cout << "lambda func" << endl;
        }
    }(2);
    return 0;
}