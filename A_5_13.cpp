/*13.	Write a program to create a class shape with functions to find area of the 
shapes and display the name of the shape and other essential component of the class. 
 Create derived classes circle, rectangle and trapezoid each having overridden functions area and display.
 Write a suitable program to illustrate virtual functions and virtual destructor.*/

#include <iostream>
#include <cmath>
using namespace std;

class shape
{
protected:
    float length;
    float breadth;
    float ar;

public:
    shape()
    {
        this->length = 0;
        this->breadth = 0;
    }
    shape(float l, float b)
    {
        length = l;
        breadth = b;
    }
    virtual void area()
    {
        ar = length * breadth;
    }
    virtual void display()
    {
        cout << "The required area is: " << ar;
    }
    virtual ~shape()
    {
        cout << "Destructor from Base class shape Called" << endl;
    }
};
class rectangle : public shape
{
public:
    rectangle(){}
    rectangle(float len, float br)
    {
        rectangle::length = len;
        rectangle::breadth = br;
    }
    void area()
    {
        ar = length * breadth;
    }
    void display()
    {
        cout << endl
             << "The area of rectangle is: " << ar << endl;
    }
    ~rectangle()
    {
        cout << "Destructor from derived class rectangle Called" << endl;
    }
};

class circle : public shape
{
private:
    float radius;

public:
    circle()
    {
        this->radius = 0;
    }
    circle(float rad)
    {
        radius = rad;
    }
    void area()
    {
        ar = 3.1436 * radius * radius;
    }
    void display()
    {
        cout << endl
             << "The area of circle is: " << ar << endl;
    }
    ~circle()
    {
        cout << "Destructor from derived class Circle Called " << endl;
    }
};

class trapazoid : public shape
{
private:
    float l1, l2, h1;

public:
    trapazoid()
    {
        l1 = 0;
        l2 = 0;
        h1 = 0;
    }
    trapazoid(float x, float y, float z)
    {
        l1 = x;
        l2 = y;
        h1 = z;
    }
    void area()
    {
        ar = ((0.5) * (l1 + l2)) * h1;
    }
    void display()
    {
        cout << endl
             << "The area of Trapazoid is: " << ar << endl
             << endl;
    }
    ~trapazoid()
    {
        cout << "Destructor from derived class trapazoid Called!" << endl;
    }
};

int main()
{
    circle c(2.5);
    rectangle r(2.5, 4.5);
    trapazoid t(3.5, 4.5, 2.5);
    shape *s[3] = {&c, &r, &t};

    for (int i = 0; i < 3; i++)
    {
        s[i]->area();
        s[i]->display();
    }
    delete s;

    return 0;
}
