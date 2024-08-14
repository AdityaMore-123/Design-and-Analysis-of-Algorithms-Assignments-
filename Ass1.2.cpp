#include <iostream>
using namespace std;

int main()
{
    int arr[25],i,size,j;
    cout << "Enter array size : ";
    cin >> size; 
    cout << "Enter " << size << " numbers : ";
    for(i=0; i<size; i++)
    {
        cin >> arr[i];
    }  
    for(i=0; i<size; i++)
    {
        if(arr[i]==0)
        {
            for(j=i; j<size-1; j++)
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "Array after swaping zeros to end : ";
    for(i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}