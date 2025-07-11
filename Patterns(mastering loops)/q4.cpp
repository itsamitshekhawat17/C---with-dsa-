#include<iostream>
using namespace std;

void nForest(int n) {
	for(int i=1;i<=n;i++){
		for (int j=1;i>=j;j++){
             
			cout<<i<<" ";
		}
		cout<<endl;
	}
}


int main(){
    int n;
    cin>>n;
    nForest(n);
}