#include<iostream>
#include<vector>
using namespace std;

int max1cons(vector<int>& nums){
    int maxCount=  0 ;
    int currentCount = 0;

    for(int i = 0 ; i < nums.size() ;i++){
        if(nums[i]==1){
            currentCount++;
            maxCount = max(maxCount,currentCount);
        }
        else{
            currentCount = 0;
        }
    }
    return maxCount ;
}

int main(){
    vector<int> nums ={1,1,0,1,1,0,1,1,1,1};

    int max1 = max1cons(nums);
    cout<<"maximun consecutive 1 are "<<max1;
    return 0;
}