#include<iostream>
using namespace std;
#include <fstream>

int main()
{
 fstream files;

string data ="Abdullah ibn Mas’ud reported: The Messenger of Allah, peace and blessings be upon him, said,\n “Most of the sins of the children of Adamn are on their tongues.” \n Ibn Mas’ud said, “O tongue! Speak goodness and be rewarded, or remain silent and be safe,\n lest you become regretful.”";

 files.open("data.txt",ios::out);

files<<data;

}

