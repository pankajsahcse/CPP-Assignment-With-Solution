#include <iostream>
using namespace std;

int strcmp(string , string );

int main()
{
    string s1 ;
    string s2 ;

    cout<<"Enter First words "<<endl;
    getline(cin,s1);

    cout<<"Enter second words "<<endl;
    getline(cin,s2);

    int res = strcmp(s1, s2);

    if(res == 0)
    {
        cout<<"String are same "<<endl;
    }
    else if(res > 0)
    {
        cout<<"1st String are Greater "<<endl;
    }
    else
    {
        cout<<"2nd String are Greater "<<endl;
    }

    return 0;
}

int strcmp(string str1, string str2)
{
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i] )
        {
            break;
        }
        i++;
    }
    return str1[i] - str2[i];
}
