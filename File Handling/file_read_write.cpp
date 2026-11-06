#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ofstream fout("text.txt");

    string word;

    cout<<"Enter Word for stop type end "<<endl;


    while(true)
    {
        getline(cin,word);

        if(word == "end")
        {
            break;
        }
        fout<<word;
    }

    fout.close();

    cout<<"Writiing completed " <<endl;

    ifstream fin("text.txt");

    string line;

    while(getline(fin,line))
    {

        cout<<line;
    }

    cout<<"\nReading Completed :" <<endl;

    fin.close();

    return 0;
}
