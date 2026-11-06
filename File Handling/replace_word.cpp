#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    ofstream fout("replaceword.txt");

    fout<<"Hello c++ Programming ";

    cout<<"Writing successfully";

    fout.close();

    /// Reading on file

    ifstream fin ("replaceword.txt");

    ofstream fout2("newreplaceword.txt");

    string replword = "java";

    string sear = "c++";

    string word;

    while(fin >> word)
    {
        if(word == sear)
        {
            fout2 << replword << " ";
        }
        else
        {
            fout2 << word << " ";
        }

    }

    cout<<"\nReplace Success !"<<endl;


    fin.close();
    fout2.close();

    remove("replaceword.txt");
    rename("newreplaceword.txt","replaceword.txt");


    return 0;
}
