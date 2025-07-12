#include<bits/stdc++.h>
using namespace std;

int main (){
    deque<int> d;

    d.push_back(2);
    d.push_front(1);

    // for(int i:d){
    //     cout<<i<<"";
    // }
    // d.pop_back();
    // for(int i:d){
    //     cout<<"\n"<<i<<"\n";
    // }

    cout<<"Print first index element \n"<<d.at(1);


    cout<<"Size->"<<d.size();
    d.erase(d.end());
    cout<<"Size->"<<d.size();

}