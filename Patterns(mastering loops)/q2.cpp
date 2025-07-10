#include<iostream>
using namespace std;

void nForest(int n) {
	for(int i=0;i<n;i++){
		for (int j=0;i=j;j++){
             int a = "*"*i;
			cout<<a;
		}
		cout<<endl;
	}
}


int main(){
    int n;
    cin>>n;
    nForest(n);
}