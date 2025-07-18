#include<iostream>
using namespace std;

string sortString(string s){
    int fre[26] = {0};

    for(char c:s){
        fre[ c -'a']++;
    }

    string storeStr = "";
    for (int i = 0 ; i<26 ;i++){
        storeStr  += string(fre[i] , 'a'+i);
    }
    return storeStr;
}

int main(){
    string str = "werthfgdsacxvbewertrt";
    cout<<"sorted string  :  "<<sortString(str); 
}