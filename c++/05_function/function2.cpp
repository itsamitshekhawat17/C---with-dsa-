#include<iostream>
using namespace std;
// Pass by vlaue (original value nahi jayegi just ek copy pass hogi jo jayegi )
void dosome(int num){
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
    cout<<num<<endl;  //ye value print krne par 10 hi aa rha hai iska mtlb hai ki function me original value nahi jaati 
    return 0;
}