#include <iostream>
#include <vector>

using namespace std;

class Tea{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Tea(){
            teaName = "Uknown";
            servings = 1;
            ingredients = {"water", "tea", "leaves"};
        }

        Tea(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
        }

        // getter
        string getTeaName(){
            return teaName;
        }

        int getServing(){
            return servings;
        }

        vector<string> getIngr(){
            return ingredients;
        }

        // setter
        void setTeaName(string name){
            // logic
            teaName = name;
        }

        void setServing(int serves){
            servings = serves;
        }

        void setIngr(vector<string> ingr){
            ingredients = ingr;
        }


};

int main(){

    Tea tea;
    tea.setTeaName("lemon tea");
    tea.setIngr({"lemon", "tea leaves", "water"});
    tea.setServing(3);
    cout << tea.getTeaName() << "\n";
    cout << tea.getServing() << "\n";
    
    vector<string> ingr = tea.getIngr();
    for(string i: ingr){
        cout<< i << "\n";
    }

    return 0;
}