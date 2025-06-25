#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* left = nullptr;
        Node* right = nullptr;

    Node(int value){
        data = value;
    }

    void dataVal(){
        cout << data << "\n" ;
    }

};


int main(){

    Node value = Node(5);

    value.dataVal();

    Node value2 = Node(7);

    value.left = &value2;

    value.left->dataVal();

    return 0;

}