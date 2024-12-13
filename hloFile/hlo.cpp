#include <iostream>     // input output stream
// # - preprocessor directives
/*preprocessor is a tool that runs before the actual compilation of your C++ code.
    Its job is to process special instructions in your program (called preprocessor directives)
    and prepare the source code for the compiler.
*/

using namespace std;    //  tells the compiler to use standard namespace by default (in entire code)


// can also use specific element of the namespace:
// using std::cout;  
// using std::endl;

// create own namespace

// namespace myKwa{
//     void dis(){
//         cout << "bruh";
//     }
// }

int main(){
    // whenever we give exe file to the OS the main method is the method from which OS starts executing the file
    cout << "hlo wassup bye bye kk \n";     // << means passing on a val to cout
    cout << "wow" << endl;  // endl -> (std::endl) -> end line
    return 0;   

    //myKwa::dis();    // using custom namespace
}
// if main func returns 0, means there was no err and code ran successfully

int halo(){

}