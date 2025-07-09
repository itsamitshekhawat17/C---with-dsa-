#include<iostream>
using namespace std;
int main (){
    int age , income;
    cout<<"enter your age and income"<<endl;
    cin>>age>>income;
    if (age>=18 & income>=5){
        cout<<"your are eligible for premeium credit card"<<endl;

    }
    else if (age>=18 & income>5){
        cout<<"you are eligible for premeium credit card"<<endl;
    }
   else {
    cout<<"you are not eligible for credit card "<<endl;
   }

}