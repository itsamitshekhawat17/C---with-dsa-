#include<iostream>
using namespace std;
// Pass by reference (ab yaha pe direct address pass hota hai )  //array always goes by pass by reference 
void dosome(int &num){
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
    num +=5;

}
int main(){
    int num = 10 ;
    dosome(num);
    cout<<num<<endl;  
    return 0;
}