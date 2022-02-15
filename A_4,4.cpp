#include <iostream>
using namespace std;
class Pattern
{
private:
    char a;

public:
    void set_data(char);
    void print(int);
};
void Pattern::set_data(char k)
{
    a = k;
}
void Pattern::print(int n)
{
    int z = 2 * n - 1;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "  ";
        }

        for (int k = 1; k <= z; k++)
        {
            cout << a << " ";
        }
        z -= 2;
        cout << endl;
    }
}
int main()
{
    Pattern star;
    star.set_data('*');
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    star.print(n);
    return 0;
}
