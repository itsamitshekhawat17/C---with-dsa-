#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,3,4};
    int *ptr=arr;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;

}