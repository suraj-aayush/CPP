#include <iostream>
#include <string>
//#include 
using namespace std;
class demo
{
private:
    int a,b;
public:
    demo()
    {
        a=10;
        b=15;
    }

    void putData()
    {
        cout<<"a = "<<a<<"b = "<<b<<endl;
    }

    void multi()
    {
        cout<<"multiplication is "<<a*b<<endl;
    }

};


int main(){
    demo aa;
    aa.putData();
    aa.multi();
    
return 0;
}