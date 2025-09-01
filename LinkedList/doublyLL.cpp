#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int val){
        data = val;
        next = prev = NULL;

    }
};

class doublylist{
    public:
    Node* head;
    Node* tail;

    public:
    doublylist(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head== NULL){
            head = tail = newNode;

        }
        else{
            newNode->next = head;
            head->prev=newNode;
            head = newNode;
        }

    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;

        }
    }

    void pop_front(int val){
        Node* temp = head;
        head = head->next;

        if(head!=NULL){
            head->prev=NULL;
            
        }
        temp->next=NULL;
        delete temp;
    }

    void pop_back(int val){
        Node* temp = tail;
        tail = tail->prev;
        if(head!=NULL){
            tail->next = NULL;

        }
        temp->next= NULL;
        delete temp;
    }

    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" <-> ";
            temp = temp->next;
        }
        cout<<" NULL";
    }
};
int main(){
    doublylist dl;

    dl.push_front(1);
    dl.push_front(2);
    dl.push_front(3);
    dl.push_front(4);
    dl.push_back(0);
    dl.pop_front(4);
    dl.pop_back(0);

    dl.print();
}



