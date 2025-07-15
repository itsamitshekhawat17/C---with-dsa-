#include<iostream>
using namespace std;


int name(int n){
  if(n==0){
    
    return 1 ;
  }
  
  return n * name(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<name(n);
    
    return 0;
}