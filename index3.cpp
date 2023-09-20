#include <iostream>
using namespace std;
#include <fstream>

int main()
{
  

string data2;
string data;
  ofstream data3("data3.txt",ios::app);


ifstream File1("data.txt");
while (getline(File1,data))
{
  data3 <<data<<endl;
}
File1.close();

cout<<endl;
ifstream fileB ("data2.txt",ios::in);

while (getline(fileB,data2))
{
  cout <<data2<<endl;
  data3<<data2<<endl;
}


     
        
}