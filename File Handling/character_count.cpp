#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ofstream fout("charcater.txt");

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

    ifstream fin("charcater.txt");

    char  ch;
    int freq[256] = {0};

    while(fin.get(ch))
    {
        if((ch>= '0' && ch <= '9' ) || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            freq[ch] ++;
        }
    }

    for(int i = 0; i < 256; i++)
    {
        if( freq[i] != 0)
        {
            cout<< (char) i << " : " << freq[i] <<endl;
        }
    }

    cout<<"\nReading Completed :" <<endl;

    fin.close();

    return 0;
}
