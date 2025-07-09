#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream inFlie;
    ofstream outFile;

    inFlie.open("amit.txt");
    
    if (!inFlie){
        cout<<"source file not opened"<<endl;
        return 1;
    }

    outFile.open("akshat.txt" );

    string line;
    while(getline(inFlie,line)){
        outFile<<line<<endl;
    }

    inFlie.close();
    outFile.close();

    cout<<"content copied"<<endl;
    return 0;

}