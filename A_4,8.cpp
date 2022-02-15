#include <iostream>
using namespace std;
class Number
{
private:
    int a;
    int b;

public:
    Number()
    {
        a = 0;
    }
    Number(int n)
    {
        cout << "Parameterized Constructor Called!" << endl;
        a = n;
    }
    Number(Number &object)
    {
        cout << "Copy Constructor Called!" << endl;
        a = object.a;
        b = object.a;
    }
    ~Number()
    {
        cout << endl;
        cout << endl;
        cout << endl;
    }

    void display1()
    {
        cout << "The value of a is: " << a << endl;
        cout << endl;
    }
    void display2()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl
             << endl;
    }
};
class Base
{
public:
    Base()
    {
        cout << "Constructor of Base class called!" << endl;
    }
    virtual ~Base()
    {
        cout << "Virtual Destructor of Base class called!" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructor of Derived class called!" << endl;
    }
    ~Derived()
    {
        cout << "Destructor of Derived class called!" << endl;
    }
};

int main()
{
    int k;
    cout << "Enter the value: ";
    cin >> k;
    cout << endl;
    Number x(k);
    x.display1();
    Number y(x);
    y.display2();
    Derived *d = new Derived();
    Base *ptr = d;
    delete ptr;
    return 0;
}
