#include <iostream>
#include <vector>

using namespace std;


class Dish{

    public:     // public access modifiers means any one can access these from instance of the class
    // data members (attributes)
        string name;
        int price;
        vector<string> ingredients;

        // member function

        void displayDishDetails(){
            cout << "dish name: " << name << endl;
            cout << "price: " << name << endl;
            cout << "ingredients: ";
            for(string i:ingredients){
            cout << i << " ";
            }
            cout << endl;
        }

    private:    // private access modifiers means no one outside the class can access it 
        int hlo;
};



int main(){
 
    Dish o1;
    o1.name = "pizza";
    o1.price = 200;
    o1.ingredients = {"cheese", "flour", "sauce"};
    o1.displayDishDetails();

    // o1.hlo=5; // wont be accessed as it is pvt

    Dish o2;
    o2.name = "chips";
    o2.price = 30;
    o2.ingredients = {"potato", "salt", "oil"};
    o2.displayDishDetails();

    return 0;
}