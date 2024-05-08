#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    //start, end, mid
    int start = 0, end = n-1, mid;

    while(start <= end)
    {
        // mid = (start + end) / 2.0;
           mid = start + (end-start) / 2.0;

        if(arr[mid] == key)
          //cout<<"Key is found. Successful Search!"<<mid;
           return mid;

        else if(arr[mid] > key)
             start = mid + 1;
        else
             end = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;

    cout<<"Enter the elements of an array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the Key: "<<endl;
    cin>>key;

    cout<<binarySearch(arr, n, key)<<endl;
    return 0;

}