#include <iostream>
#include <vector>

using namespace std;



class Chai{

    private:
        string teaName;
        int servings;

    public:
        Chai(string name, int serve): teaName(name), servings(serve){}      // another way of writing method

        void display() const {
            cout << "teaname: " << teaName << "\n";
        }

        friend bool comapreServings(const Chai &chai1, const Chai &chai2){  // friend func let us use private members of the class
            return chai1.servings > chai2.servings;
        }

};


int main(){

    Chai lemonTea("Lemon tea", 5);
    Chai gingerTea("Ginger tea", 6);

    lemonTea.display();
    gingerTea.display();

    if(comapreServings(lemonTea, gingerTea)){
        cout << "lemon tea has more servings" <<"\n";
    }else{
        cout << "ginger tea has more servings" <<"\n";
    }

    return 0;
}


/*
EXPLANATION OF THE FRIEND FUNCTION CONCEPT:

1. **What is a Friend Function?**
   - A `friend` function is a non-member function that has access to the private and protected members of a class.
   - It is declared inside the class with the `friend` keyword but defined outside the class.
   - It is not a member of the class, so it is called like a normal function.

2. **Why Use a Friend Function?**
   - To allow external functions to access private members of a class without violating encapsulation.
   - In this example, the `compareServings` function is a `friend` of the `Chai` class, so it can directly access the private members (`servings`) of two `Chai` objects.

3. **How is it Used in the Code?**
   - The `compareServings` function compares the `servings` of two `Chai` objects.
   - It is declared as a `friend` in the `Chai` class to allow access to the private `servings` member.
   - This eliminates the need for public getters, keeping the class members encapsulated.

4. **Important Notes:**
   - A `friend` function is **not a member** of the class.
   - A `friend` function does not have a `this` pointer, as it is not called on an object.
   - Overusing `friend` functions can reduce encapsulation, so they should be used judiciously.

5. **In This Example:**
   - `compareServings` is declared as a `friend` in the `Chai` class.
   - It takes two `Chai` objects as parameters, accesses their private `servings` members, and compares them.
   - This enables us to write clean, intuitive comparison logic without exposing `servings` publicly.
*/