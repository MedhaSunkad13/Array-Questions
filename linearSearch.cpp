#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;

}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -4, 0, 5, 22, 1};
    int key;

    cout<<"Enter the key element to be searched: "<<endl;
    cin>>key;

    bool found = search(arr, 10, key);

    if(found)
    {
        cout<<"Key element is present,Successful search."<<endl;
    }
    else{
        cout<<"Key element is not found,Unsuccessful search."<<endl;
    }

    return 0;
}