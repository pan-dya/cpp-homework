#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void ReversePrint(Node* ptr){
    if (ptr != nullptr){
        ReversePrint(ptr -> next);
        cout << ptr -> data << endl;
    }
}

int main() {
    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;
    
    node1 -> data = 987;
    node2 -> data = 654;
    node3 -> data = 321;
    
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = nullptr;
    
    ReversePrint(node1);
}
