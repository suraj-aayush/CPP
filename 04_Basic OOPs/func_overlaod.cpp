#include <iostream>
#include <string>

class ConsDemo
{
    public:
    void sumdemo(int a,char ch)
    {
        if(ch=='p')
        {
            cout<<"square is "<<a*a<<endl;
        }
    }

    void sumdemo(int a,int b, char ch)
    {
        if(ch=='a')
        {
            cout<<"sum is "<<a+b<<endl;
        }
        else
        {
            cout<<int(ch);
        }
    }

    void sumdemo(char a[],char b[])
    {
        if(a==b)
        {
            cout<<"strings are equal \n";
        }

        else
        {
            cout<<"string are not equal \n"; 
        }
    }

};

using namespace std;
int main(){
    ConsDemo c1;
    c1.sumdemo(5,'p');
    c1.sumdemo(5,'a');
    c1.sumdemo(5,10,'a');
    c1.sumdemo(5,10,'b');
    c1.sumdemo("hello","hello");
return 0;
}