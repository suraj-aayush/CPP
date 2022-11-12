#include <iostream>
#include <string>
using namespace std;

class demo1;
class demo2{
    int b;

    public:
    void getdata()
    {
        cout<<" ENTER DATA B ";
        cin>>b;
    }
    friend int sum(demo1,demo2);
};

class demo1 {
    int a;

    public:
    void getdata()
    {
        cout<<" ENTER TWO NUMS ";
        cin>>a;
    }

    friend int sum(demo1,demo2);
};

int sum(demo1 obj1,demo2 obj2)
{
    int sum = obj1.a + obj2.b;
    return sum;
}

int main(){
    demo1 aa;
    aa.getdata();

    demo2 bb;
    bb.getdata();

    cout<<"\n SUM IS "<<sum(aa,bb);

return 0;
}