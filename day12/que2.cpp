#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertAtEnd(Node* &head,Node* &tail,int d){
    Node* temp=new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    tail -> next = temp;
    tail=temp;  
}

void printLinkedList(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout << temp -> data << " ";
        temp=temp-> next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    Node* tail= NULL;
    insertAtEnd(head,tail,12);
    insertAtEnd(head,tail,13);
    insertAtEnd(head,tail,14);
    insertAtEnd(head,tail,15);
    //print linked list
    printLinkedList(head);

    return 0;
}