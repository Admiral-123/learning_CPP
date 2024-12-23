#include <iostream>

using namespace std;

int main(){

    int bookSales[3][5]={
        {30,45,77,23,62},   // shop 1 sales for 5 days
        {21,34,37,13,72},   // shop 2 sales for 5 days
        {40,42,89,21,42}    // shop 3 sales for 5 days
    };

    for(int i=0; i<3; i++){
        cout << "at shop " << i+1 << " :-\n";
        for(int k=0; k<5; k++){
            cout << "on day " << k+1 << " : ";
            cout <<bookSales[i][k] << endl;
        }
    }

    return 0;
}