#include <iostream>
#include <vector>

using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void printReverse(Node* n){

if(n->next != NULL){
    printReverse(n->next);
}
cout<<n->data<<endl;

}

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third-> data = 3;
    third-> next = NULL;

    printReverse(head);

}
