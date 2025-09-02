#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data = data1;
        next = NULL;
    }

};
class circularlist{
   public:
   Node* head;
   Node* tail;

   circularlist(){
    head = tail = NULL;
   }

   void push_front(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=tail=newNode;
        tail->next = head;
    }
    else{
        newNode->next = head;
        head=newNode;
        tail->next= newNode;
    }
   }


    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail=newNode;
            tail->next = newNode;
        }
        else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }

    }

    void pop_head(int val){
        if(head == NULL){
            return ;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;

        }
        else{
            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next =NULL;
            delete temp;
        }
    }
    void pop_tail(int val){
        if(head == NULL){
            return ;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;

        }
        else{
            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            
            temp->next =NULL;
            delete temp;
        }
    }
    
   void print(){
   if(head==NULL){
    return;
   }

   cout<<head->data<<" -> ";
   Node* temp = head->next;

   while(temp!=head){
    cout<<temp->data<<" -> ";
    temp = temp->next;
   }
   cout<<head->data;
   }
};

int main(){
      circularlist cll;
      cll.push_front(3);
      cll.push_front(2);
      cll.push_front(1);
      cll.push_back(5);
      cll.pop_head(1);
      cll.pop_tail(5);

      cll.print();
    return 0 ;
}