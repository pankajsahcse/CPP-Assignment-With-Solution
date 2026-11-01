#include<iostream>
using namespace std;

char * strcopy(char *, char *);

int main()
{

    char source[] = "Hello World";
    char dest[50];

    strcopy(dest, source);

    cout << "Copied String: " << dest << endl;


    return 0;
}

char * strcopy(char * dest, char * source)
{
    int i ;
    for(i= 0; source[i] != '\0'; i++)
    {
        dest[i] = source[i];
    }
    dest[i] = '\0';

    return dest;
}

