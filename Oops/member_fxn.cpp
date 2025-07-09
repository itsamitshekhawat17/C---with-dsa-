#include<iostream>
using namespace std;

class Student{
public:
       string name;
       int marks;
       int age;

    //    void display(){
    //     cout<<name<<" "<<age<<endl;
    //    }
    void display();


};
void Student::display(){        //member function ko class ke outside krne ke liye class me declare krna pega 
    cout<<name<<" "<<age<<" "<<marks<<endl;
}

int main(){
    Student s1;
    s1.name = "amit";
    s1.age = 20;
    s1.marks = 100;
    s1.display();
    return 0 ;
}

