#include<iostream>
using namespace std;


void name(int i , int n){
  if(i<1){
    cout<<n;
    return;
  }
  
  name(i-1,n+i);
}
int main(){
    int n;
    cin>>n;
    name(n,0);
    
    return 0;
}