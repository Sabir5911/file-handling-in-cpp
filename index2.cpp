#include<iostream>
using namespace std;
#include <fstream>
int main()
{
 fstream files;

string data="The rose is red\n A girl is playing there \nThere is a playground\nan aeroplane is in the sky\nNumbers are not allowed in the password.”";

 files.open("data2.txt",ios::out);
files<<data;


    return 0;
}