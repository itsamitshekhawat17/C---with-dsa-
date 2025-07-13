#include<iostream>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int dup_n=n;
        int rev_num =0;
        while(n>0){
            int a = n %10;
            n= n/10;
            rev_num = (rev_num*10) + a;
        
        }
        // return rev_num;
        if(rev_num==dup_n)
            cout<<"true";
        
        else
            cout<<"false";
        
    }
};

int main(){
     Solution obj ;
     cout<<obj.countDigit(121);
}