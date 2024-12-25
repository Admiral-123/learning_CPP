#include <iostream>
#include <vector>


using namespace std;

class Wow{
    public:
        string name;
        int age;
        vector<string> friends;

        // default constructor:
        Wow(){  // constructor is a function which has same name as the class
            cout << "constructor is called \n";
            name = "alex";
            age = 28;
            friends = {"alice", "john", "varun", "riya"};
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

    Wow o1;    // constructor is called on this line
    cout << "\n";
    o1.displayDetails();    // constructor has some predefined var on that basis this func will be called

    cout << "\n";

    o1.age = 18;
    o1.name = "Rahul";
    o1.friends = {"david", "shashank", "roberta"};
    o1.displayDetails();
    
  

    

    return 0;
}