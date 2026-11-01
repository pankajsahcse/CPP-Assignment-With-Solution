#include<iostream>

using namespace std;

/// Using pointer
int strlen(string *);

/// Using simple string
int strlen2(string );


int main()
{

    string line;
    cout<<"Enter String  :"<<endl;
    getline(cin,line);

    int res = strlen(&line);
    cout<<"Lenght of string is " <<res <<endl;

    cout<<"Mehtod 2 "<<endl;

    int ans = strlen2(line);
        cout<<"Lenght of string is " <<ans <<endl;

    return 0;
}

/// Using pointer
int strlen(string *s)
{
    int len = 0;
    int i ;
    for(i = 0;  (*s)[i] != '\0' ; i++)
    {
        len++;
    }
    return len;
}

int strlen2(string s)
{
    int len = 0;
    int i ;
    for(i = 0;  s[i] != '\0' ; i++)
    {
        len++;
    }
    return len;
}
