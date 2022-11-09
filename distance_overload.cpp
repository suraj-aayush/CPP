#include <iostream>
using namespace std;
class dist
{
    int m;
    int cm;

    public:
    
    void input()
    {
        cout<<" ENTER dist IN M AND CM --->  ";
        cin>>m>>cm;
    }
    
    dist operator+(dist d2)
    {
        dist d3;
        d3.m=m+d2.m;
        d3.cm=cm+d2.cm;
        
        if(d3.cm>=100)
        {
            d3.m=d3.m + d3.cm/100;
            d3.cm=d3.cm%100;
        }

        return d3;
        
    }
    
    void display()
    {
        cout<<" final data is --->>>  "<<m<<"  "<<cm;
    }
    
};

int main()
{
    dist d1,d2,d3;
    d1.input();
    d2.input();
    
    d3=d1+d2;
    
    d3.display();

    return 0;
}