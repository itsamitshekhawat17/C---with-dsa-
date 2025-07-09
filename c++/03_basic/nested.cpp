#include<iostream>
using namespace std ;
int main (){
    int age =19;
    bool hasVoterID = false;
    if (age>=18){
        if(hasVoterID){
            cout<<"Can vote"<<endl;
        }
        else{
            cout<<"voter id leke aa"<<endl;
        }
    }
    else{
        cout<<"cannot vote"<<endl;
    }
}