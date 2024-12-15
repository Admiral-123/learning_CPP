#include <iostream>


using namespace std;

int main(){
    string userName;
    string userAge;

    cout << "what is your name \n" << endl;
    getline(cin, userName);     // takes user input

    cout << "what is your age \t " << userName << " ? ";
    cin >> userAge;     // can directly use cin for taking userinput


    // print the taken data
    cout << userName << endl;
    cout << userAge  << endl;

    
    return 0;
}