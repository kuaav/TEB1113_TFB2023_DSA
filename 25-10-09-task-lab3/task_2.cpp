#include<iostream>
#include<string>
using namespace std;
/*Doubly linked list using struct pointers ( prev and next address)*/

struct Node {
    string data; 
    Node* prev;
    Node* next;
    //Musttt have 2 different pointer, thats the theory
};


int main(){
    Node node1;
    Node node2;
    Node node3;

    node1.prev = NULL;
    node1.data = "wxy";
    node1.next = &node2;

    node2.prev = &node1;
    node2.data =  "love";
    node2.next = &node3;
    
    node3.prev = &node2;
    node3.data = "Life";
    node3.next = NULL;
    
    cout <<  "Foward: " << endl;
    cout << node1.data << "->" << node2.data << "->" << node3.data << endl; 
    
    cout << "Backwards: " << endl;
    cout << node3.data << "->" << node2.data << "->" << node1.data << endl;
    
    cout << "First Address: "<< node1.prev << endl; 
    cout << "Next Address: "<< node1.next << endl;
    cout << " previous address (node2): " << node2.prev << endl;
    cout << "Next address (of node 2): " << node2.next << endl;
    cout << "Previous address (of node 3)" << endl;
    cout << "Next Address (of node 3)" << endl;


    return 0;


}