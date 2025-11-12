#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    void enq(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void deq() {
        if (front == NULL) {
            cout << "Queue is empty!\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    int getFront() {
        if (front == NULL) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return front->data;
    }

    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Queue q;
    int count = 0; 
    int x;
    
    while (count < 5) {   
        cout << "Enter an element: ";
        cin >> x;
        q.enq(x);
        count++;
    }

    cout << "Front: " << q.getFront() << endl;

    q.deq();
    cout << "Front after dequeue: " << q.getFront() << endl;

    return 0;
}