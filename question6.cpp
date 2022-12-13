#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("H:/ineuron/Assignment/Assignment-34/abc.txt");
    char ch;
    int chCount=0,spCount=0,lineCount=0;
    while(!fin.eof())
    {
        fin.get(ch);
        if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
        chCount++;
        else if(ch==' ')
        spCount++;
        else if(ch=='\n')
        lineCount++;
    }
    cout<<"No. of characters in file:"<<chCount<<endl;
    cout<<"No. of words in file     :"<<spCount<<endl;
    cout<<"No. of lines in file     :"<<lineCount<<endl;
    fin.close();
    return 0;
}