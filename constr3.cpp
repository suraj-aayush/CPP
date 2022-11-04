#include <iostream>
#include <string>

using namespace std;
class demo
{
private:
    int a,b,add;
public:
    demo(int m, int n)
    {
        a=m;
        b=n;
    }

    void putData()
    {
        cout<<"a = "<<a<<"b = "<<b<<endl;
    }

    void sum()
    {
add=b+a;
        cout<<"addition is "<<add<<endl;
    }

};

int main(){
    demo aa(10,20);
   aa.putData();
    aa.sum();
    
return 0;
}