#include <iostream>
using namespace std;
class time
{
private:
    int h, m, s;

public:
    void set_Data(int H, int M, int S)
    {
        h = H;
        m = M;
        s = S;
    }
    friend istream &operator>>(istream &, time &);
    friend ostream &operator<<(ostream &, time &);
    friend time operator+(time, time);
    friend void operator==(time, time);
};
istream &operator>>(istream &cin, time &t)
{
    int hrs, min, sec;
    cout << "Time in hours minutes seconds: ";
    cin >> hrs >> min >> sec;
    t.set_Data(hrs, min, sec);
    return (cin);
}
ostream &operator<<(ostream &cout, time &t)
{
    cout << endl
         << "The time is: ";
    cout << t.h << " hours " << t.m << " minutes " << t.s << " seconds" << endl;
    return (cout);
}
time operator+(time T1, time T2)
{
    time Temp;
    Temp.h = T1.h + T2.h;
    Temp.m = T1.m + T2.m;
    Temp.s = T1.s + T2.s;
    if (Temp.m >= 60)
    {
        Temp.h = Temp.h + Temp.m / 60;
        Temp.m = Temp.m - (Temp.m / 60) * 60;
    }
    if (Temp.s >= 60)
    {
        Temp.m = Temp.m + Temp.s / 60;
        Temp.s = Temp.s - (Temp.s / 60) * 60;
    }

        return (Temp);
}
void operator==(time T1, time T2)
{
    if (T1.h == T2.h && T1.m == T2.m && T1.s == T2.s)
        cout << endl
             << endl
             << "Input times are equal!" << endl;
    else
    {
        cout << endl
             << endl
             << "Input times are not equal!" << endl;
    }
}
int main()
{
    time t1, t2, t3;
    cin >> t1;
    cin >> t2;
    cout << t1 << endl;
    cout << t2 << endl;
    t3 = t1 + t2;
    cout << "After addition: " ;
    cout << t3;
    t1 == t2;
    return 0;
}