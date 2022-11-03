#include <iostream>
#include <string>
//#include

// class prime
// {
// private:
//     int x;
// public:
//     int check_prime()
//     {
//         int c=0;
//         for (int i = 2; i < x/2; i++)
//         {
//             if(x%i==0)
//             {
//                 c++;
//             }
//         }

//         if(c==0)
//         {
//             return true;
//         }
        
//         else
//         {
//             return false;
//         }
//     }
// };

using namespace std;
int main(){
    int a,b,c1=0,c2=0;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;
if(b-a==2)
{
        //for a
        for (int i = 2; i <a/2; i++)
        {
            if(a%i==0)
            {
                c1++;
            }
        }
        //for b  
        {
           for (int  i = 2; i <b/2; i++)
           {
                if (b%i==0)
                {
                    c2++;
                }
                
           }
           
        }

    if(c1==c2==0)
    {
        cout<<"twin prime \n ";
    }


}


    else
    {
        cout<<"not twin prime \n";
    }

return 0;
}