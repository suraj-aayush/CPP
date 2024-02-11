#include <iostream>
#include <string>
using namespace std;

void bubble(int *arr, int n)
{
    if(n==0 || n==1)
    return;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
        swap(arr[i],arr[i+1]);
    }

        bubble(arr,n-1);
}

int main(){
    int arr[6] = {1,5,3,6,8,9};
    int n=6;
    bubble(arr,n);

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

return 0;
}