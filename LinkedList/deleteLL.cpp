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
//deleting head
Node* removehead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head =head->next;
    delete temp;
    return head;
}

//deleting tail
Node* removetail(Node* head){
    if(head ==NULL || head->next == NULL) return NULL;
    Node* temp = head ;
    while(temp->next->next !=  NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head ;
}

// deleting the element by its kth position 
Node* removek(Node*head , int k){

    if(head ==NULL){
        return head;
    }
    if(k==1){
        Node*temp= head;
        head = head->next;
        free(temp);
        return head;
    }
   int count =0 ;
   Node*temp= head ;
   Node*prev = NULL ;
   while(temp!=NULL){
    count ++;
    if(count ==k){
        prev->next = prev->next->next;
        free(temp);
        break;
    }
    prev = temp;
    temp = temp->next;
   }
return head;
}
 // delete the element by its value

Node* removeel(Node*head , int el){

    if(head ==NULL){
        return head;
    }
    if(head->data == el){
        Node*temp= head;
        head = head->next;
        free(temp);
        return head;
    }
   Node*temp= head ;
   Node*prev = NULL ;
   while(temp!=NULL){
    
    if(temp->data ==el){
        prev->next = prev->next->next;
        free(temp);
        break;
    }
    prev = temp;
    temp = temp->next;
   }
return head;
}

int main(){
    vector<int> arr ={2,3,5,4};
    Node* head = convertArr2LL(arr);
    // head = removehead(head);
    head = removeel(head,5);
    print(head);
  
}

