#include<iostream>
#include<vector>
using namespace std ; 

int removeDuplicate(vector<int>& nums){
    if(nums.size() == 0){
        return 0;
    }

    int i = 0 ;

    for(int j = 1 ; j <nums.size() ; j++){
        if(nums[j] != nums[i] ){
            i++;
            nums[i] = nums[j];
        }
    }

    return i+1;
}

int main(){
    vector<int> nums = {1,1,3,4,5,5,6,7,7};

    int unique = removeDuplicate(nums);

    cout<< "Unique elements count "<< unique<<endl;
    cout<<"Modified Array ";
    for(int i = 0 ;i<unique;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}