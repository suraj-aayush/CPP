#include <iostream>
#include <string>
//#include

using namespace std;

class demo
{
private:
    int a,b,sum;
public:
    demo()
    {
        a=10;
        b=15;
    }

    void putData()
    {
        cout<<"a = "<<a<<" b  = "<<b<<endl;
    }

    void add()
    {
        sum=a+b;
        cout<<"sum is "<<sum<<endl;
    }

};

int main(){
    demo aa;
    aa.putData();
    aa.add();
    
return 0;
}