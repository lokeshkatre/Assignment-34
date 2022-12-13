#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    fin.open("H:/ineuron/Assignment/Assignment-34/abc.txt");
    fout.open("H:/ineuron/Assignment/Assignment-34/abc.txt",ios::app);
    if(fin.is_open())
        fout<<"How are you now?"<<endl;
    cout<<"Data appended to the file!"<<endl;
    fin.close();
    fout.close();
    return 0;
}