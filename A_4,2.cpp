#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
private:
    float a;
    float b;
    float c;

public:
    void input()
    {
        float x, y, z;
        cout << "Enter the length of sides of triangle: " << endl;
        cin >> x >> y >> z;
        a = x;
        b = y;
        c = z;
    }
    void Print()
    {
        cout << "The lengths of sides of triangle are: " << a << ", " << b << ", " << c << endl;
        cout << "The area of triangle: " << Calculate_area() << endl;
        cout << "The perimerter of triangle: " << Calculate_perimeter() << endl;
    }
    float Calculate_area();
    float Calculate_perimeter();
};
float Triangle::Calculate_area()
{
    float area, s;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
float Triangle::Calculate_perimeter()
{
    float perimeter;
    perimeter = (a + b + c);
    return perimeter;
}

int main()
{
    Triangle t;
    t.input();
    t.Print();
    return 0;
}
