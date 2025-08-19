#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;}


    public:
    Node(int data1){
        data = data1;
        next = NULL;

    
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover =head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;

    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* inserthead(Node*head ,int val){
    return new Node(val,head);
    
}

Node* insertTail(Node*head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;

    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

int main(){
    vector<int> arr ={2,3,5,4};
    Node* head = convertArr2LL(arr);
    // head = removehead(head);
    head = insertTail(head,100);
    print(head);
  
}
