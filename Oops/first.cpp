#include<iostream>
using namespace std;

class Fruit{         //creating class
public:
       string name;
       string color;
      
    };

int main (){
     Fruit apple;   //creating object
     apple.name = "Apple";
     apple.color = "red";
     cout<<apple.name<< "-" <<apple.color<<endl;

     Fruit *mango = new Fruit;
     mango->name = "Mango";
     mango->color = "Yellow";
     cout<<mango->name<<"-"<<mango->color<<endl;

}    