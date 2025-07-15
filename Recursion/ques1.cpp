#include<iostream>
using namespace std;

// int count = 0;
void name(int i, int n){
    // if (count ==5){
    //     return ;
    // }
    // cout<<s1<<endl;
    // count ++;
    // name(s1);
    if(i>n){
        return;
    
    }
    cout<<"amit"<<endl;
    name(i+1,n);

}
int main(){
    int n ;
    cin >>n;
    name(1, n);
    return 0;
}