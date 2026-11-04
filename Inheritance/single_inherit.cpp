#include<iostream>

using namespace std;

class Base
{
protected :
    int i;

public:
    Base()
    {
        i = 10;
        cout<<"Base Constructor"<<endl;
    }

    Base(int n)
    {
        i = n;
        cout<<"Base Para constructor"<<endl;
    }

    ~Base()
    {
        cout<<"Base Destructor"<<endl;
    }

    void fun()
    {
        cout<<"Base Fun  i:" << i << endl;
    }

};

class Derived : public Base
{

    int j;

public:
    Derived()
    {
        j = 100;
        cout<<"Derived Constructor"<<endl;
    }

    Derived(int n, int b) : Base(b)
    {
        j = n;
        cout<<"Derived Para constructor"<<endl;
        cout<<"Base Class Variable i :" << Base::i << endl;
    }

    ~Derived()
    {
        cout<<"Derived Destructor"<<endl;
    }

    void fun()
    {
        cout<<"Derived Fun  j:" << j << endl;
    }

};

int main()
{

/// Base Call
//    Base obj ;
//    obj.fun();

/// Derived Call  - it runs iin heirarchy

 Derived obj(20,40);
 obj.fun();


    return 0;
}
