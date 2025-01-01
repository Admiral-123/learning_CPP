#include <iostream>
#include <vector>

using namespace std;

// base/parent class

class Tea{
    protected:
        string teaName;
        int servings;

    public:
        Tea(string name, int serve): teaName(name), servings(serve){
            cout << "Tea Constructor called " << teaName << endl;
        }

        virtual void brew() const {
            cout << "Brewing: " << teaName << " with generic method" << "\n";
        }

        virtual void serve() const {
            cout << "Serving: " << servings << "cups of tea with generic method" << "\n";
        }

        virtual ~Tea(){
            cout << "tea destructor called " << teaName << "\n";
        }
};

class GreenTea: public Tea {
    public:
        GreenTea(int servings): Tea("Green Tea", servings){
            cout << "Green tea constructor called" << "\n";
        }

        void brew() const override {
            cout << "Brewing " << teaName << "by steeping green tea leaves" << "\n";
        }

        ~GreenTea(){
            cout << "green tea destructor called" << "\n";
        }
};

class MasalaChai: public Tea {
    public:
        MasalaChai(int serve) : Tea("masala tea", serve){
            cout << "masalachai constructor called" << "\n"; 
        }

        void brew() const override final {
            cout << "Brewing" << teaName << "with spices and milk" << "\n";
        }

        ~MasalaChai(){
            cout << "masala chai destructor called" << "\n";
        }
};

// class SpicyMasalaChai: public MasalaChai {
//     // void brew() const override {  // cant override this method as in its parent class it is final
//     //     cout << "Brewing" << teaName << "with spices and milk" << "\n";
//     // }
// };

int main(){

    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaChai(3);

    tea1->brew();   // to call method
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}


/* 
This program demonstrates the use of inheritance, polymorphism, and virtual functions in C++.

1. The `Tea` class:
   - Acts as the base class for different types of tea.
   - Contains protected attributes `teaName` (name of the tea) and `servings` (number of servings).
   - Provides a constructor to initialize the tea name and servings, printing a message when called.
   - Declares two virtual methods:
     - `brew()` for defining the tea preparation process.
     - `serve()` for specifying how the tea is served.
   - Includes a virtual destructor to ensure proper cleanup of derived class resources when objects are deleted via base class pointers.

2. The `GreenTea` class:
   - Inherits from the `Tea` class.
   - Represents a specific type of tea, "Green Tea".
   - Its constructor initializes the base class and prints a message.
   - Overrides the `brew()` method to specify the brewing process for green tea.
   - Defines a destructor to print a message during object cleanup.

3. The `MasalaChai` class:
   - Inherits from the `Tea` class.
   - Represents "Masala Chai" (spiced tea).
   - Its constructor initializes the base class and prints a message.
   - Overrides the `brew()` method, marking it as `final` to prevent further overrides in derived classes.
   - Defines a destructor to print a message during object cleanup.

4. Polymorphism:
   - The `brew()` and `serve()` methods are declared as virtual in the `Tea` class, enabling runtime polymorphism.
   - Base class pointers are used to call overridden methods in the derived classes, ensuring the correct behavior based on the actual object type.

5. Final specifier:
   - The `brew()` method in the `MasalaChai` class is marked as `final`, meaning it cannot be overridden by any further derived class.
   - This is illustrated in the commented-out `SpicyMasalaChai` class, which would result in a compilation error if it attempted to override `brew()`.

6. The `main()` function:
   - Demonstrates the creation of dynamic objects (`GreenTea` and `MasalaChai`) using base class pointers.
   - Calls the `brew()` and `serve()` methods to show polymorphism in action.
   - Uses the `delete` operator to clean up dynamically allocated memory, invoking the destructors for both derived and base classes.

7. Program output:
   - The constructors for each class print messages when objects are created.
   - The overridden `brew()` and `serve()` methods display specific behaviors for `GreenTea` and `MasalaChai`.
   - The destructors ensure proper cleanup and print messages during object destruction.
*/
