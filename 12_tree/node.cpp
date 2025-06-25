#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int value){
        data = value;
        right = nullptr;
        left = nullptr;
    }

    // void dataVal(){
    //     cout << data << "\n" ;
    // }

};


int main(){

    // Node value = Node(5);

    // value.dataVal();

    // Node value2 = Node(7);

    // value.left = &value2;

    // value.left->dataVal();

    Node* firstNode = new Node(4);
    Node* secondNode = new Node(5);
    Node* thirdNode = new Node(6);
    Node* fourthNode = new Node(7);

    firstNode->left = secondNode;
    firstNode->right = thirdNode;
    secondNode->left = fourthNode;


    return 0;

}