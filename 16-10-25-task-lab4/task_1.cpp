#include<iostream>
#include<string>
using namespace std;
/*Doubly circular linked list using struct pointers ( prev and next address)*/

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

    node1.prev = &node3;
    node1.data = "wxy";
    node1.next = &node2;

    node2.prev = &node1;
    node2.data =  "love";
    node2.next = &node3;
    
    node3.prev = &node2;
    node3.data = "Life";
    node3.next = &node1;
    
    
    
    Node* current1 = &node1;
    cout << "Foward: " << endl;
    
    while( current1!= &node3){
        cout << current1->data << " ";
        current1 = current1->next;
        
    }
    cout << current1->data << " " << endl;

    
    
    Node* current2 = &node3;
    cout << "Backwards: " << endl;
    while( current2!=&node1){
        cout << current2->data << " ";
        current2 = current2->prev;
        
    }
    cout << current2->data << " ";



    return 0;


}