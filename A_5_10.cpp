/*10.	Make a class named Fruit with a data member to calculate the number of fruits in a basket.
Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
Print the number of fruits of each type and the total number of fruits in the basket.*/

#include <iostream>
using namespace std;

class Fruit
{
public:
    static int fruitCounter;
    Fruit()
    {
        fruitCounter++;
    }
};
class Apples : public Fruit
{
public:
    static int applesCounter;
    Apples() : Fruit()
    {
        applesCounter++;
    }
};
class Mangoes : public Fruit
{
public:
    static int mangoesCounter;
    Mangoes() : Fruit()
    {
        mangoesCounter++;
    }
};

int Fruit::fruitCounter = 0;
int Apples::applesCounter = 0;
int Mangoes::mangoesCounter = 0;
int main()
{
    Apples Apple1, Apple2, Apple3;
    Mangoes Mango1, Mango2, Mango3, Mango4, Mango5;
    cout << "Total number of fruits: " << Fruit::fruitCounter << endl;
    cout << "Number of apples: " << Apples::applesCounter << endl;
    cout << "Number of mangoes: " << Mangoes::mangoesCounter << endl;

    return 0;
}






/*class Fruit
{
private:
    int fruit_count;
public:
    void set_data(int a){
        fruit_count=a;
    }
    void print_data(int x, int y){
        cout<<endl<<"The number of apples: "<<x<<endl;
        cout<<"The number of mangoes: "<<y<<endl;
        cout<<"The number of total fruits: "<<fruit_count<<endl;
    }
};
class Apple
{
private:
    int apple_count;
public:
    void set_apple(int b){
        apple_count=b;
    }
};
class Mangoes
{
private:
    int mango_count;
public:
    void set_mango(int c){
        mango_count=c;
    }
};
int main()
{
    int k,l;
    Fruit z;
    Apple p;
    Mangoes q;
    cout<<"Enter number of Apples in the basket: ";
    cin>>k;
    cout<<"Enter number of Mangoes in the basket: ";
    cin>>l;
    z.set_data(k+l);
    z.print_data(k,l);
    return 0;
}*/
