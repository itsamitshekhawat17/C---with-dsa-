#include<iostream>
using namespace std;


void name(int i , int n){
  if(i<1){
    return;
  }
  name(i-1,n);//this function is called before cout
  cout<<i<<endl;
   

    

}
int main(){
    int n;
    cin>>n;
    name(n,n);
    return 0;
}