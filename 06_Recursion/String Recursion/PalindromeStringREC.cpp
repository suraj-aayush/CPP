#include <iostream>
#include <string>
using namespace std;

bool pali(string str, int l, int r)
{
    if(l>r)
    return true;

    if(str[l] != str[r])
    return false;

    else
    return pali(str,l+1,r-1);

}



int main(){
    string str = "abcdcba";
    bool ans = pali(str,0,str.size()-1);
    if(ans)
    cout<<" PALI ";
    else
    cout<<" NOT PALI ";
    
return 0;
}