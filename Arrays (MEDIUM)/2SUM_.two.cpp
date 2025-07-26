#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums){
   
}

int main(){
    vector<int> nums = {1,2,3,8,9,6,7};

    vector<int> sum2 = twoSum(nums);
    if(!sum2.empty()){
        cout<<sum2[0] << " " <<sum2[1];
    }
    else{
        cout<<"No pair found";
    }
    return 0;
    
}