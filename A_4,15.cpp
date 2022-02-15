#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;
    friend Complex Sum_Complex(Complex o1, Complex o2);

public:
    Complex()
    {
        real = 0;
        img = 0;
    };
    Complex(int a, int b)
    {
        real = a;
        img = b;
    };
    void display()
    {
        cout << "The complex number is: (" << real << " + " << img << "i )" << endl
             << endl;
    }
};
Complex Sum_Complex(Complex o1, Complex o2)
{
    Complex o3;
    o3.real = (o1.real + o2.real);
    o3.img = (o1.img + o2.img);
    cout << "The sum of the complex numbers is: (" << o3.real << " + " << o3.img << "i )" << endl;
    return o3;
}
int main()
{
    int a, b, c, d;
    cout << "Enter the value of a and b for (a + bi): " << endl;
    cin >> a >> b;
    cout << "Enter the value of c and d for (c + di): " << endl;
    cin >> c >> d;
    Complex s(a, b);
    Complex t(c, d);
    s.display();
    t.display();
    Sum_Complex(s, t);
    return 0;
}
