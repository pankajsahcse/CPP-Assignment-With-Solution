#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ofstream fout("data.txt");

    fout << "Hello Pankaj 123";
    fout.close();

    ifstream fin("data.txt");

    char ch;
    int vowels = 0, consonants = 0;
    int digits = 0, spaces = 0;

    while (fin.get(ch))
    {
        ch = tolower(static_cast<unsigned char>(ch));

        if (ch >= 'a' && ch <= 'z')
        {

            if (ch == 'a' || ch == 'e' ||
                ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
    }

    fin.close();

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}
