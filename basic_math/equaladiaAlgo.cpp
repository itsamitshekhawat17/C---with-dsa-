#include<iostream>
using namespace std;

int main(){
    int a=30 , b =45;
    while (a!=0 && b !=0){
        if(a>b){
            a=a%b;
        }
        else{
        
            b =b%a;
        }
    }
    if (a==0){
        cout<<b<<"is gcd ";
    }
    else{
        cout<<a<<"is gcd";
    }
    return 0;
}