#include<iostream>
using namespace std;

class Solution {
public:
    int GCD(int n1,int n2) {
        int gcd = 1;
        for (int i =0;i<=min(n1,n2);i++){
            gcd =i;
        }
        cout<<"The gcd of"<<n1<< "and" <<n2<<"is"<<gcd;
    }
};

int main(){
    Solution obj;
    obj.GCD(24,45);
}