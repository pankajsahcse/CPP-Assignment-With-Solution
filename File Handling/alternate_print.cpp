#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ofstream fout ("alternate.txt");


    string word;

    cout<<"Enter Word for stop type end "<<endl;

    while(true)
    {
        getline(cin,word);

        if(word == "end")
        {
            break;
        }
        fout<<word <<endl;
    }

    fout.close();

    cout<<"Writiing completed " <<endl;

        ifstream fin ("alternate.txt");

        int  i = 1;
        char ch;
        while(fin.get(ch))
        {
            if(i % 2 == 0)
            {
                cout<<ch << " " <<endl;
            }
            i++;
        }

        fin.close();

    return 0;
}
