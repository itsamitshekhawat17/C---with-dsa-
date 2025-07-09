#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter three number";
    cin>>a>>b>>c;
    if (a>b && a>c){
        cout<<"a is greater";
    }
    else if (b>a && b>c){
        cout<<"b is greater";
    }
    else if (c>a && c>b){
        cout<<"c is greater";
    }
    else{
        cout<<"all are equal";
    }


}