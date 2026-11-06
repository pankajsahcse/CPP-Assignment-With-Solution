#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    ofstream fout("words.txt");

    fout << "Java programming is interesting";
    fout.close();

    ifstream fin("words.txt");

    string line, word;
    string longest = "", shortest = "";
    bool firstWord = true;

    while (getline(fin, line))
    {
        stringstream ss(line);

        while (ss >> word)
        {
            if (firstWord)
            {
                longest = word;
                shortest = word;
                firstWord = false;
            }

            if (word.length() > longest.length())
            {
                longest = word;
            }

            if (word.length() < shortest.length())
            {
                shortest = word;
            }
        }
    }

    fin.close();

    if (firstWord)
    {
        cout << "File contains no words";
    }
    else
    {
        cout << "Longest word: " << longest << endl;
        cout << "Shortest word: " << shortest << endl;
    }

    return 0;
}
