#include <iostream>
#include <vector>

using namespace std;

class Wow{
    public:
        string* name;   // name is a ptr
        int age;
        vector<string> friends;

        // parameter constructor:
        Wow(string thisName, int thisAge, vector<string> thisFriends){  // constructor is a function which has same name as the class
            cout << "constructor is called \n";
            name = new string(thisName);    // dynamically allocate memory for string
            age = thisAge;
            friends = thisFriends;
        }

        // copy constructor
        Wow(const Wow& other){
            name = new string(*other.name);
            age = other.age;
            friends = other.friends;    

            cout << "copy constructor called \n";
        }

        // destructor
        ~Wow(){
            delete name;
            cout << "destructor called \n";
        }

        void displayDetails(){
            cout << "name: " << *name << "\nage: " << age <<"\n";
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

    cout << "Wow ------- ";
    o1.displayDetails();    

    cout << "Wow copied ------";
    Wow copiedWow = o1;
    copiedWow.displayDetails();

    return 0;
}

/*
Explanation of Key Components:

1. Copy Constructor:
   - The copy constructor (`Wow(const Wow& other)`) is called when a new object is initialized using an existing object.
   - In this case, `Wow copiedWow = o1;` triggers the copy constructor.
   - It performs a **deep copy** of the dynamically allocated `name` to avoid issues like double deletion.
   - It also copies `age` and `friends` since they do not involve dynamic memory.

2. Destructor:
   - The destructor (`~Wow()`) is called automatically when an object goes out of scope or is explicitly deleted.
   - In this case, it releases the memory allocated for `name` using `delete name`.
   - Without the destructor, the dynamically allocated memory for `name` would not be freed, leading to a memory leak.

3. Execution Flow:
   - The parameterized constructor initializes `o1`.
   - The copy constructor creates `copiedWow` as a deep copy of `o1`.
   - The destructor is invoked twice: once for `copiedWow` and once for `o1`, cleaning up the memory for both objects.

*/