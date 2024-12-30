#include <iostream>

using namespace std;

class BankAccount{
    private:
        string accNumber;
        double balance;

    public:
        BankAccount(string accNum, double initialBal){
            accNumber = accNum;
            balance = initialBal;
        }

        double getBal() const {
            return balance;
        }

        void deposit(double money){
            if(money<0){
                cout << "err" << "\n";
            }
            else{
                balance += money;
                cout << "deposited " << money << "\n";
            }
        }

        void withdraw(double money){
            if(money > 0 && money<balance){
                balance -= money;
                cout << "amount withdrawed" << money << endl;
            }else{
                cout << "err" << endl;
            }
        }

};

int main(){
    BankAccount myAcc("b34f4e21a", 200);

    cout << myAcc.getBal() << "\n";
    return 0;
}