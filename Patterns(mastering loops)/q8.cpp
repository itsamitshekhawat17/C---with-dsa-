#include<iostream>
using namespace std;

void nForest(int n) {
	for (int i=0;i<n;i++){
		//Spacce
        for(int j=0;j<i;j++){
            cout<<" ";
        }


        //Stars
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }



        //Spaces
        for(int j=0;j<i;j++){
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