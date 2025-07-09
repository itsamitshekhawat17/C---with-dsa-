#include<iostream>
using namespace std;
int main(){
    int a, b;
    char opration;
    cout<<"Enter two value and operation (+,-,*,?) want to perform "<<endl;
    cin>>a>>b>>opration;
    switch (opration)
    {
        case '+':
        cout<<"add"<<a+b<<endl;
        break;
        case '-':
        cout<<"subtract"<<a-b<<endl;
        break;
        case '*':
        cout<<"multiply"<<a*b<<endl;
        break;
        case '/':
        if(b!=0){
        cout<<"division"<<a/b<<endl;}
        else{
            cout<<"error"<<endl;
        }
        break;
        default:
        cout<<"invalid"<<endl;
    
    }
}