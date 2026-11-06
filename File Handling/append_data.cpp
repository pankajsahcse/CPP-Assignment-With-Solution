#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("data.txt", ios::app); // esme ios::app - file is now append mode on

    if (!fout)
    {
        cout << "File opening failed";
        return 1;
    }

    string text;

    cout << "Enter text to append: ";
    getline(cin, text);

    fout << text << endl;
    fout.close();

    cout << "Content appended successfully";

    return 0;
}
