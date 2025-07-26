#include<iostream>
#include<vector>
using namespace std ;

int findmissing(vector<int>& nums){
    int n = nums.size();

    int Sum = (n*(n+1))/2;


    int actualSum = 0;


    for(int num:nums){

        actualSum = actualSum + num ;

    }

    return Sum - actualSum ;
}

int main(){
    vector<int> nums = {0,1,2,4,5};

    int missing = findmissing(nums) ; 
    cout<<"missing number is " <<missing;
    return 0 ;
}