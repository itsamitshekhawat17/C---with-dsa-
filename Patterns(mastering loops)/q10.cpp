#include<iostream>
using namespace std;

void nForest(int n){
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;

    }


    for(int i = 1;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;

    }
}


int main(){
    int n;
    cin>>n;
    nForest(n);
}