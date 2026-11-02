#include<iostream>

using namespace std;

class Singleton
{
    static Singleton *obj;

    Singleton()
    {
        cout<<"Default Const"<<endl;
    }

public :

    static Singleton * getObject()
    {
        if(obj == NULL)
        {
            obj = new Singleton();
        }
        return obj;
    }

};

Singleton* Singleton::obj = NULL;

int main()
{

cout<<"Checking "<<endl;

    Singleton *s1 = Singleton::getObject();
    Singleton *s2 = Singleton::getObject();

    if(s1 == s2)
    {
        cout<<"Same Refences"<<endl;
    }
    else
    {
        cout<<"Different Ref"<<endl;
    }


    return 0;
}
