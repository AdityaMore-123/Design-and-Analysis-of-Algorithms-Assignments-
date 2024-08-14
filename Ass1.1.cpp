#include <iostream>
using namespace std;

int main()
{
    int arr[25],i,count=0,size;
    cout << "Enter array size : ";
    cin >> size; 
    cout << "Enter " << size << " numbers.";
    for(i=0; i<size; i++)
    {
        cin >> arr[i];
        if(arr[i]==1)
        {
            count++;
        }
    }  
    cout << "The number of zeros in the given array is : " << size-count;

    return 0;
}