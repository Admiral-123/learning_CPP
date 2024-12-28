#include<iostream>
#include<vector>

using namespace std;

class Tea{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        // main constructor
        Tea(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;

            cout << "Main constructor called" << "\n";

        }

        // delegating constructor - delegates to the main constructor
        Tea(string name): Tea(name, 1, {"water", "tea leaves"}){}

        void displayTeaDetails(){
            cout << "tea name: " << teaName << "\n";
            cout << "servings: " << servings << "\n";
            cout << "ingredients: " << "\n";
            for(string i: ingredients){
                cout << i << "\n";
            }
        }
};


int main(){

    Tea quicTea("any tea");
    quicTea.displayTeaDetails();

    return 0;
}