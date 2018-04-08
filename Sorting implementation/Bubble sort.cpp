#include <iostream>
using namespace std;

void bubbleSort(int *a, int sz)
{
    int temp=0;
    for(int i=0; i<sz-2; i++)
    {
        for(int j=0; j<sz-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main() {
    int arr[6],a;
    for(int i=0; i<6; i++)
    {
        cin>>a;
        arr[i]=a;
    }
  
    //bubbleSort(arr[0],6);   //->      void bubbleSort(int &a, int sz);
    bubbleSort(arr,6);    //->      void bubbleSort( int *a, int sz);
    
    for(int i=0; i<6; i++)  //Printing the sorted values
    {
        cout<<arr[i]<<endl;
    }
    
}