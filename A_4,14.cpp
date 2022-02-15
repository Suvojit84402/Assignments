#include <iostream>
using namespace std;
class Number
{
private:
    int n;
    friend Number Swap_two(Number o1, Number o2);

public:
    Number()
    {
        n = 0;
    };
    Number(int a)
    {
        n = a;
    };
};
Number Swap_two(Number o1, Number o2)
{
    swap(o1.n,o2.n);

    /*Number o3, o4;
    o3.n = ((o1.n + o2.n) - o1.n);
    o4.n = ((o1.n + o2.n) - o2.n);*/
    
    cout << endl
         << "Swap Successfull!" << endl
         << endl;
    cout << "The 1st number is: " << o1.n << endl;
    cout << "The 2nd number is: " << o2.n << endl;
    return 0;
}
int main()
{
    int k, l;
    cout << "Enter 1st number: ";
    cin >> k;
    cout << "Enter 2nd number: ";
    cin >> l;
    Number m(k);
    Number n(l);
    Swap_two(m, n);
    return 0;
}
