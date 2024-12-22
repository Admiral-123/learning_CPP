#include <iostream>

using namespace std;

void hlo(string name = "anon"){ // default parameter, if we dont provide args while calling then this would be the default args
    cout << "hlo " << name << endl;
}  
int main(){
    hlo("kagiso");
    return 0;
}