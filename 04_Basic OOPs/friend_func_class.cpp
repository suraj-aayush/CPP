#include <iostream>
#include <string>
//#include 

using namespace std;

class test2;
class test1
{
private:
    int a;
    
public:
test1()
{
    a=0;
}

////////////////////////////////////////

test1(int k)
{
    k=a;
}
    // void getdata()
    // {
    //     cout<<"entr data 1 number ";
    //     cin>>a;
    // }

    friend int big(test1,test2);

};

class test2
{
    int b;

    public:
    test2(){
        b=0;
    }

///////////////////////////////////////////////////////////

    test2(int j)
    {
        b=j;
    }
    
    // void getdata(){
    // cout<<" ENTER DATA 2 NUMBER ";
    // cin>>b;
    // }

    friend int big(test1, test2);

};

int big(test1 t1, test2 t2)
{
    if(t1.a>t2.b)
    {
        cout<<t1.a<<"t1 is bigger than "<<t2.b;
    }
    else if(t2.b>t1.a)
    {
        cout<<t2.b<<"t2 is bigger than t1 "<<t1.a;
    }
    else
    {
        cout<<"BOTH EQUAL ";
    }
}

int main(){
    int x,y;
    cout<<"enter x and y ";
    cin>>x>>y;

    test1 t1(x);
    //t1.getdata();

    test2 t2(y);
    //t2.getdata();

    big(t1,t2);


return 0;
}