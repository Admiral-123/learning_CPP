#include <iostream>
#include <vector>


using namespace std;

class Wow{
    public:
        string name;
        int age;
        vector<string> friends;

        // parameter constructor:
        Wow(string thisName, int thisAge, vector<string> thisFriends){  // constructor is a function which has same name as the class
            cout << "constructor is called \n";
            name = thisName;
            age = thisAge;
            friends = thisFriends;
        }

        void displayDetails(){
            cout << "name: " << name << "\nage: " << age <<"\n";
            cout << "friends: ";
            for(string f: friends){
                cout << f << " ";
            }
            cout << "\n";
        }
        
};

int main(){

    Wow o1("alex", 23, {"david", "shashank", "roberta"});    // pass in the value in constructor
    cout << "\n";
    o1.displayDetails();    

    // cout << "\n";

    // o1.age = 18;
    // o1.name = "Rahul";
    // o1.friends = {"david", "shashank", "roberta"};
    // o1.displayDetails();
    
  

    

    return 0;
}