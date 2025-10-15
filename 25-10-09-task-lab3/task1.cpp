25-10-09 
22010863 

/*Linked list using struct and pointers aka pointer the next address

25-10-09 lab 3
Puteri Banafsha Binti Azmi
22010863
*/



#include <iostream>
#include <string>
using namespace std;
struct Node {
    string data;
    Node* ptr;
};

int main() {
    Node node1;
    Node node2;
    Node node3;

    node1.data = "I";
    node1.ptr = &node2;

    node2.data = "love";
    node2.ptr = &node3;
    
    node3.data = "Jason";
    node3.ptr = NULL;
    
    cout << "The orginal: " << "\n";
    cout << node1.data << " " << node1.ptr->data << " "<< node1.ptr->ptr->data << "\n";
    
    cout << "After deletion: " << endl;
    node1.ptr = &node3;
    Node* current = &node1;
    
    while( current!=nullptr){
        cout << current->data << " ";
        current = current->ptr;
        
    }
    
    cout << endl;
    return 0;
}
