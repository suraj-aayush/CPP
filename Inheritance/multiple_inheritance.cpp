#include <iostream>
#include <string>
//#include 

using namespace std;

class a
{
    public:
    a()
    {
        cout<<" class A constructor "<<endl;
    }
};

class b
{
    public:
    b()
    {
        cout<<" class B constructor "<<endl;
    }
};

class c:public b, public a // here pehle 'b' class is inherited , isliye output me B ka contructor data is printed
{
    public:
    c()
    {
        cout<<" class C constructor "<<endl;
    }
};


int main(){
    c obj;

return 0;
}