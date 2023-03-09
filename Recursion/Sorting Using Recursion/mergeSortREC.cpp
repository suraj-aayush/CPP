#include <iostream>
#include <string>
using namespace std;

void merge(int *arr, int l, int r, int mid)
{
    int l1 = mid-l+1;
    int l2 = r-mid;

    int a[l1],b[l2];
    int index = l;

//LEFT ARRAY COPY KRO A[] ME i.e  L to MID
    for (int i=0;i<l1;i++)
    {
        a[i] = arr[index];
        index++;
    }
  
  //  int k=mid+1;

//RIGHT ARRAY COPY KRO B[] ME i.e MID+1 to R
      for (int i = 0; i <l2; i++)
    {
        b[i] = arr[index];
        index++;
    }
    
    //MERGE TWO SORTED ARRAY 

    int i = 0, j=0,k=l;

    while (i<l1 && j <l2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    
    while (i<l1)
    {
        arr[k]=a[i];
        k++;
        i++;   
    }
    
    while (j<l2)
    {
        arr[k]=b[j];
        k++;
        j++;
    }

}

void mergebreak(int *arr, int l, int r)
{
    if(l >= r)
    return;

        int mid = l +(r-l)/2;

        mergebreak(arr,l,mid);
        mergebreak(arr,mid+1,r);

    merge(arr,l,r,mid);
}

int main(){
    int arr[6] = {3,5,8,2,9,0};
    mergebreak(arr,0,5);

    for (int i = 0; i <6; i++)
    {
        cout<<arr[i]<<" ";   
    }
    
return 0;
}