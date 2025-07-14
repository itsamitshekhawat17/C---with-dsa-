#include<iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        int count;
        for(int i=1 ; i<=n ;i++){
            if (n%i==0){
                count ++;
            }
            
        }
        if(count == 2){
                cout<<"it is a prime number";
            }
            else{
                cout<<"it is not a prime number";
            }
    }
};

int main(){
    Solution obj;
    obj.isPrime(-6);
    return 0;
}
