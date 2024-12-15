#include <iostream>
#include <string>       // you might not use this header everytime as most of the times it is included in the <iostream> header

using namespace std;

int main(){

    string batsman = "kl rahul\t";      // \t for tab
    string nickName = "\"klassy\" rahul";  //use backslash to avoid programmatic val of symbols such as '',"";
    cout<<batsman<< nickName << endl;


    return 0;
}