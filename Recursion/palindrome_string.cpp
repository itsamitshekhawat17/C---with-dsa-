#include<iostream>
using namespace std;

bool ispal_str(string st,int i){


    int n = st.length();
    if(i>=n/2) return true;

    if(st[i]!=st[n-i-1])
    return false;
    ispal_str(st,i+1);

    
}
    

int main(){
    string str = "Madam";

    if (ispal_str(str,0)){
        cout<<"yes,it is a palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
}