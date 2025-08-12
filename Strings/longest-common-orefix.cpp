#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
string commonprefix(vector<string> strs){

    //sort the string
    sort(strs.begin(),strs.end());

    string s1 =  strs[0];
    int i = 0;
    string s2 = strs[strs.size()-1];
    int j = 0;
    
    string ans="";
    while(i<s1.size()&&j<s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++;j++;
        }
        else{
            break;
        }

    }
    return ans;
}
int main(){
    

    int n;
    cout<<"enter no of strings";
    cin>>n;

    cout<<"enter strings";
    vector<string> strs(n);
    for(int i=0;i<n;i++){
        cin>>strs[i];
    }
    cout<<"longest common prefix is "<<commonprefix(strs)<<endl;

    return 0;

}