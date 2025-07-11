#include<iostream>
using namespace std;

void nForest(int n) {
	for (int i=0;i<n;i++){
		//Spacce
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }


        //Stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }



        //Spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

		}
		cout<<endl;
	}
}


int main(){
    int n;
    cin>>n;
    nForest(n);
}