#include<iostream>
#include<vector>
using namespace std;

int onlyone(vector<int>& nums){
    int result = 0;

    // XOR all the number 
    for(int num:nums){
        result^=num;
    }

    return result;
}

int main(){
    vector<int> nums = {1,2,3,1,2,3,4,5,5};

    int unique = onlyone(nums);

    cout<<"The number that appread one's is "<< unique;
    return 0 ;

}