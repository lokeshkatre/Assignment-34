#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("H:/ineuron/Assignment/Assignment-34/abc.txt");
    if(!fout)
    {
        cout<<"File did not created"<<endl;
    }
    else
        cout<<"File created successfully"<<endl;
    fout.close();
    return 0;
}