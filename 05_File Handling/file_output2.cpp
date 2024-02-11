#include <iostream>
#include <string>
#include <fstream> 
using namespace std;

int main(){

    ofstream f1;
    f1.open("abcde.txt");

    if(f1.fail())
    {
        cout<<"not openend ";
    }
    else
    {
        f1<<"hello guys ";
    }

    f1.close();
    
return 0;
}