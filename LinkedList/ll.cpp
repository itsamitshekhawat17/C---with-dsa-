#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;

    }

    public:
    Node(int data1){
        data = data1;
        next = NULL;

    }
};
class List{
  public:
  Node* head;
  Node*tail;

  public:
  List(){
    head = tail = NULL;
  }

  void push_front(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = tail =newNode;
        return;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
  }


  void push_back(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = tail= newNode;
    }
    else{
        tail->next= newNode;
        tail= newNode;
    }
  }

  void pop_front(){
    if(head ==NULL){
        cout<<"LL is empty";
        return;
    }
    else{
        Node* temp = head;
        head = head->next;
        temp->next =NULL;
        delete temp;
    }
  }

  void pop_back(){
    if(head==NULL){
        cout<<"LL is empty";
        return;
    }
    else{
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail = temp;
    }
  }

  void insert(int val , int pos){
    if(pos<0){
        cout<<"invalid position";
        return ;
    }
    else if(pos==0){
        push_front(val);
        return;
    }
    else{
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0;i<pos-1;i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

  }
  void printll(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
  }

  void search(int key){
    Node* temp = head; 
    int index = 0;
    while(temp->next!=NULL){
        if(temp->data==key){
            cout<<"key is present at index "<<index<<endl;
             }
        
            temp = temp->next;
            index++;
        
    }
  }
};
int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.insert(5,0);
    ll.insert(0,2);
    ll.search(2);

   ll.printll();
    return 0;
}