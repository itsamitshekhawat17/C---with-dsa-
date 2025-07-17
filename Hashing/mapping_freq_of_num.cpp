#include<iostream>
#include<map>
#include <unordered_map>

using namespace std;

int main(){
    int n ;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"enter the elements of array";
        cin>>arr[i];
     
}

//precompute
unordered_map<int,int> mpp;
for(int i =0;i<n;i++){
    mpp[arr[i]]++;
}

int q ;
cout<<"enter the no. of elements to check";
cin >>q;
while(q--){
    int number;
    cout<<"enter the elements you want to chcek"<<endl;
    cin>>number;
    //fetch
    cout<<mpp
[number];
}


}
    
