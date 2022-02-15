/*9. Create two classes named Mammals and Marine Animals. Create another class named Blue Whale,
which inherits both the above classes. Now, create a function in each of these classes, which prints,
"I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals"
respectively. Now, create an object for each of the above class and try calling.

a)	function of Mammals by the object of Mammal
b)	function of MarineAnimal by the object of MarineAnimal
c)	function of BlueWhale by the object of BlueWhale
d)	function of each of its parent by the object of BlueWhale
*/

#include<iostream>
using namespace std;
class Mammals
{
public:
    void Print(){
        cout<<"I am Mammal"<<endl;
    }
};
class MarineAnimals
{
public:
    void Print(){
        cout<<"I am Marine Animal"<<endl;
    }
};
class BlueWhale:public Mammals, public MarineAnimals
{
public:
    void Print(){
        cout<<"I belong to both the categories: Mammals as well as Marine Animals"<<endl;
    }
};
int main()
{
    Mammals a;
    MarineAnimals b;
    BlueWhale c;
    cout<<"Calling function of Mammal by Object of Mammal: "<<endl;
    a.Print();
    cout<<endl;

    cout<<"Calling function of Marine Animal by Object of Marine Animal: "<<endl;
    b.Print();
    cout<<endl;

    cout<<"Calling function of Blue Whale by Object of Blue Whale: "<<endl;
    c.Print();
    cout<<endl;

    cout<<"Calling function of Parents by the object of Blue Whale: "<<endl;
    c.Mammals::Print();
    c.MarineAnimals::Print();

    return 0;
}


