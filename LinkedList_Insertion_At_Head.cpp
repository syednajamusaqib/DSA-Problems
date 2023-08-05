#include<iostream>
using namespace std;
//Creating a Node
class Node{
    public:
    int data;
    Node* next;
    //Default Constructor
    Node(){
        data=0;
        next=NULL;
    }
    //Paramaterised Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

//Inserting element at Head of Linked List
void inserAtHead(Node* &head,int d){
    Node* temp = new Node(d); // Creating new Node to be inserted
    temp -> next = head;
    head = temp;
}
//Function to print Linked List
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){
    Node* node = new Node(6);

    print(node);
    inserAtHead(node,7);
    print(node);

    return 0;
}