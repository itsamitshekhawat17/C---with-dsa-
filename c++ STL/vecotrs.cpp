#include<bits/stdc++.h>
using namespace std;

void explain_vector(){
    vector<int> v(5,100);

    v.push_back(1);
    v.emplace_back(2);

    cout<<v[10];
}
int main(){
    explain_vector();
}
