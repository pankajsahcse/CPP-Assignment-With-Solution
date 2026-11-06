#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream f1("source.txt");
    f1 <<"Pankaj"<<endl;

    f1.close();


    ifstream fin("source.txt");
    ofstream fout("destination.txt");

    if (!fin || !fout)
    {
        cout << "File opening failed";
        return 1;
    }

    char ch;

    while (fin.get(ch))
    {
        //fout.put(ch) — specifically ek character write karne ke liye hota hai.
        fout.put(ch);

        // fout <<ch // insertion operator hai, jo character ke saath strings, numbers aur doosre data types bhi write kar sakta hai.
    }

    fin.close();
    fout.close();

    cout << "File copied successfully";

    return 0;
}
