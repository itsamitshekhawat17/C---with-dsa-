#include<iostream>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int dup_n = n ;
        int sum=0 ;
        
        while(n>0){
            int a = n %10;
            int cube =a*a*a;
            sum = sum +cube;
            n= n/10;
        
            
        
        }
        return (sum==dup_n) ;
      
    }
    void showResult(int num){
        if(isArmstrong(num)){
            cout<<"it is a armstrong no.";

        }
        else{
            cout<<"it is not a armstrong no.";
        }

    }
};

int main(){
     Solution obj ;
    obj.showResult(1551);
     return 0;
}