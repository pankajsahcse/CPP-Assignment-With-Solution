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

class Base1 : virtual public Base
{
public :
    Base1()
    {
        cout<<"Base1 Constructor"<<endl;
    }
    ~Base1()
    {
        cout<<"Base1 Destructor"<<endl;
    }
};

class Base2 : virtual public Base
{
public :
    Base2()
    {
        cout<<"Base2 Constructor"<<endl;
    }
    ~Base2()
    {
        cout<<"Base2 Destructor"<<endl;
    }
};


class Derived : public Base1, public Base2
{

    int j;

public:
    Derived()
    {
        j = 100;
        cout<<"Derived Constructor"<<endl;
    }

    Derived(int n)
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

/// Base Call
//    Base obj;
//    obj.fun();

///
    Derived obj;
    obj.fun();



    return 0;
}
