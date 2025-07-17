#include<iostream>
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
int hash[13] = {0};
for(int i=0;i<n;i++){
    hash[arr[i]] +=1;
}

int q ;
cout<<"enter the no. of elements to check";
cin >>q;
while(q--){
    int number;
    cout<<"enter the elements you want to chcek"<<endl;
    cin>>number;
    //fetch
    cout<<hash[number];
}


}
    
