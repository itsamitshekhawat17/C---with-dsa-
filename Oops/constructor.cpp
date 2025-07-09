#include<iostream>
using namespace std;

class Rectangle{
    public:
    int l;
    int b;

    Rectangle(){  //Default constructor  - No args pass
        l = 0;
        b = 0;
    }

    Rectangle(int x,int y){  //parameterized constructor  - args are passed
        l = x;
        b = y;
    }

    Rectangle(Rectangle& r){ //copy constructor
        l = r.l;
        b = r.b;
    }


    ~Rectangle(){
        cout<<"Destructor is called\n";
    }

};

int main(){
    Rectangle *r1 = new Rectangle;
    cout<<r1->l<<"-"<<r1->b<<endl;
    delete r1;

    Rectangle r2(3,4);
    cout<<r2.l<<"-"<<r2.b<<endl;

    Rectangle r3 = r2;
    cout<<r3.l<<"-"<<r3.b<<endl;
}