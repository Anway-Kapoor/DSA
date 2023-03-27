#include<bits/stdc++.h>
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

 // INSERT AT HEAD FUNCTION

void insertAtHead(Node* &head, int d){ 
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

// INSERT AT TAIL FUNCTION
 
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

// INSERT AT A POSITION

void insertAtPosition(Node* &head, Node* &tail, int posi, int d){
    if(posi == 1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < posi){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;
}

//  DELETE AT A POSITION

void deletenode(Node* &head,Node* &tail, int posi){
    // deleting first or start node
    if(posi == 1){
        Node* temp = head;
        head = head -> next;
    // memory free of the start node
        temp -> next = NULL;
        delete temp;
    }
    // deleting middle node or last node
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < posi){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        if(prev -> next == NULL){
            tail = prev;
        }
        delete curr;
    }
}


// PRINT FUNCTION

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << "->";
        temp = temp -> next;
    } 
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail, 12);
    insertAtTail(tail, 14);
    insertAtTail(tail, 18);
    print(head);
    deletenode(head, tail, 4);
    print(head);
    cout << tail -> next;
    return 0;
}