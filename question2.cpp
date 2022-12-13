#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("H:/ineuron/Assignment/Assignment-34/abc.txt");
    fout << "Hello there!" << endl;
    fout.close();

    ifstream fin;
    fin.open("H:/ineuron/Assignment/Assignment-34/abc.txt");
    fin.seekg(0, ios_base::beg);
    char ch;
    int  chCount = 0, spCount = 0;
    while (!fin.eof())
    {
        fin.get(ch);
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            chCount++;
        else if (ch == ' ')
            spCount++;
    }
    cout << "\nNo. of characters :" << chCount << endl;
    cout << "\nNo. of words      :" << spCount+1 << endl;
    fin.close();
    return 0;
}