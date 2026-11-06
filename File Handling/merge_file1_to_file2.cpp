#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin1("file1.txt");
    ifstream fin2("file2.txt");
    ofstream fout("merged.txt");

    if (!fin1 || !fin2 || !fout)
    {
        cout << "File opening failed";
        return 1;
    }

    char ch;

    while (fin1.get(ch))
    {
        fout.put(ch);
    }

    fout << endl;

    while (fin2.get(ch))
    {
        fout.put(ch);
    }

    fin1.close();
    fin2.close();
    fout.close();

    cout << "Files merged successfully";

    return 0;
}
