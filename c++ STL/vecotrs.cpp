#include<bits/stdc++.h>
using namespace std;

void explain_vector(){
    vector<int> v(5,100);

    v.push_back(1);
    v.emplace_back(2);

    for (int i= 0; i <v.size();i++){

          cout<<v[i]<<" ";
    }
}

 void auto_vector(){
    vector<int> v1(4,200);

    for (auto x:v1){                  //asiigned in 
        cout<<x<<"";
    }

 }   

void vector_pair(){
    vector<pair<int,string>> v2(2);

    v2.push_back({1,"Amit "});
    v2.push_back({2,"Singh"});

    for (auto x2:v2){
        cout<<x2.first<<" "<<x2.second;
    }


}  

int main(){
    explain_vector();
    auto_vector();
    vector_pair();
}
