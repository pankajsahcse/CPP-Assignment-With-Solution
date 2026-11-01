#include<iostream>
using namespace std;

char * strconcat(char *, char *);

int main()
{

    char s1[100];
    char s2[50];

    cout << "Enter First String: ";
    cin.getline(s1, 100);

    cout << "Enter Second String: ";
    cin.getline(s2, 50);

    strconcat(s1,s2);

    cout<<"After Concatenate " << s1 << endl;



    return 0;
}

char * strconcat(char *dest, char *sour)
{
    int i, j;
    for(i = 0; dest[i] != '\0' ; i++);

    for(j = 0; i < sour[j] != '\0'; j++)
    {
        dest[i] = sour[j];
        i++;
    }

    dest[i] = '\0';

    return dest;
}
