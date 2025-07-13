#include<iostream>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        while(n>0){
            count =count+1;
            n= n/10;
        }
    return count;
    }
};

int main(){
     Solution obj ;
     obj.countDigit(456);
     cout<<obj.countDigit(456);
}