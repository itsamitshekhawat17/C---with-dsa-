#include<iostream>
using namespace std;

int main(){
   string s;
   cout<<"enter the string";
   cin>>s;




//precompute
int hash[256] = {0};
for(int i=0;i<s.size();i++){
    hash[s[i]]++;
}

int q ;
cout<<"enter the no. of elements to check";
cin >>q;
while(q--){
    char c;
    cout<<"enter the elements you want to \n"<<endl;
    cin>>c;
    //fetch
    cout<<hash[c];
}


}
    
