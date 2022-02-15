/*12. Create a class named Shape with a function that prints "This is a shape".
Create another class named Polygon inheriting the Shape class with the same function that
 prints "Polygon is a shape". Create two other classes named Rectangle and Triangle having the
same function which prints "Rectangle is a polygon" and "Triangle is a polygon" respectively.
Again, make another class named Square having the same function, which prints "Square is a rectangle".
Now, try calling the function by the object of each of these classes.
*/

#include <iostream>
using namespace std;
class Shape
{

public:
    virtual void Print()
    {
        cout << "This is a shape." << endl;
    }
};
class Polygon : public Shape
{

public:
    void Print()
    {
        cout << "Polygon is a shape." << endl;
    }
};
class Rectangle : public Polygon
{

public:
    void Print()
    {
        cout << "Rectangle is a Polygon." << endl;
    }
};
class Triangle : public Polygon
{

public:
    void Print()
    {
        cout << "Triangle is a Polygon." << endl;
    }
};
class Square : public Rectangle
{
public:
    void Print()
    {
        cout << "Square is a Rectangle." << endl;
    }
};

int main()
{

    Shape sh;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square s;

    cout << "Accessing Shape, Polygon, Rectangle, Triangle, Square Objects by Shape Class Object: " << endl;
    Shape *ptr1, *ptr2, *ptr3, *ptr4;
    ptr1 = &p;
    ptr2 = &r;
    ptr3 = &t;
    ptr4 = &s;
    sh.Print();
    ptr1->Print();
    ptr2->Print();
    ptr3->Print();
    ptr4->Print();
    cout << endl;

    cout << "Accessing Shape, Polygon, Rectangle, Triangle, Square Objects by Polygon Class Object: " << endl;
    Polygon *ptr5, *ptr6, *ptr7;
    ptr5 = &r;
    ptr6 = &t;
    ptr7 = &s;
    p.Shape::Print();
    p.Print();
    ptr5->Print();
    ptr6->Print();
    ptr7->Print();
    cout << endl;

    cout << "Accessing Polygon, Rectangle, Square Objects by Rectangle Class Object: " << endl;
    Rectangle *ptr8;
    ptr8 = &s;
    r.Polygon::Print();
    r.Print();
    ptr8->Print();
    cout << endl;

    cout << "Accessing Polygon, Triangle Objects by Triangle Class Object: " << endl;
    t.Polygon::Print();
    t.Print();
    cout << endl;

    cout << "Accessing Shape, Polygon, Rectangle, Square Objects by Square Class Object: " << endl;
    s.Rectangle::Print();
    s.Print();

    return 0;
}
