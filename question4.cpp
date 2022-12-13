#include<iostream>
#include<cctype>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("H:/ineuron/Assignment/Assignment-34/abc.txt");
    fout.open("H:/ineuron/Assignment/Assignment-34/two.txt");
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch>='a'&& ch<='z')
        {
            ch=toupper(ch);
        }
        else if(ch>='A'&& ch<='Z')
        {
            ch=tolower(ch);
        }
        fout<<ch;

    }
    cout<<"file copied successfully"<<endl;
    fin.close();
    fout.close();
    return 0;

}