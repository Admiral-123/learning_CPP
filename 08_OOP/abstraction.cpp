#include <iostream>
#include <string>

using namespace std;

class Tea {
    public:
        virtual void prepareIngredients() = 0;  // pure virtual function
        // if any function is virtual then the class becomes abstract class

        virtual void brew() = 0;
        virtual void serve() = 0;

        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};

// derived class

class GreenTea : public Tea{
    public:
        void prepareIngredients() override {
            cout << "green leaves and water is ready" << "\n";
        }

        void brew() override {
            cout << "Green tea brewed" << "\n";
        }

        void serve() override {
            cout << "Green tea served" << "\n";
        }
};
class MasalaTea : public Tea{
    public:
        void prepareIngredients() override {
            cout << "masala, milk, tea and water is ready" << "\n";
        }

        void brew() override {
            cout << "masala tea brewed" << "\n";
        }

        void serve() override {
            cout << "masala tea served" << "\n";
        }
};

int main(){

    GreenTea one;
    one.makeTea();

    MasalaTea two;
    two.makeTea();


    return 0;
}