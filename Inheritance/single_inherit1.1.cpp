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

    virtual ~Base()
    {
        cout<<"Base Destructor"<<endl;
    }

    virtual void fun()
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

/// Object of Derived Class, pointer ka type Base hai. ,, By this way we achive here polymarphism
// In Method virtual keyword is used, so by the runtime it will decide which fun ki to be called
    Base* obj  = new Derived();
    obj -> fun();

    delete obj;

    return 0;
}
