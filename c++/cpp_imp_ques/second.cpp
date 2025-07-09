#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
string sourceFile, destinationFile;
cout<<"Enter the name of the file:";
cin>>sourceFile;
cout<<"Enter the destination of the file:";
cin>>destinationFile;
ifstream source(sourceFile,ios::in);
if(!source)
{
cerr<<"Error: Unable to open source file.\n";
return 1;
}
ofstream destination(destinationFile, ios::out);
if(!destination)
{
cerr<<"Error: Unable to open destination file.\n";
return 1;
}
string line;
while(getline(source,line))
{
destination<<line<<"\n";
}
source.close();
destination.close();
cout<<"Content copied successfully from "<<sourceFile<< "to "<<destinationFile<<"\n";
return 0;
}

