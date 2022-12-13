#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin1,fin2;
    ofstream fout;
    string ch, file1, file2, file3;
    cout<<"\nEnter first file name with Extension .txt:";
    getline(cin,file1);
    cout<<"\nEnter second file name with Extension .txt:";
    getline(cin,file2);
    cout<<"\nEnter third file name with Extension .txt which is merge file of first and second file:"<<endl;
    getline(cin,file3);
    fin1.open(file1);
    fin2.open(file2);

    if(!fin1 || !fin2)
    {
        cout<<"file not found!\n"<<endl;
        exit(EXIT_FAILURE);
    }
    fout.open(file3);
    if(!fout)
    {
        cout<<"\nfile not found!\n"<<endl;
    }
    
    while(!fin1.eof())
    {
        getline(fin1,ch);
        fout<<ch;
    }
    while(!fin2.eof())
    {
        getline(fin2,ch);
        fout<<ch;
    }   
    cout<<"file has been merged"<<endl;
    fin1.close();
    fin2.close();
    fout.close();
    return 0;
}