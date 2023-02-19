/// write a program to find linear Search

#include<iostream>
using namespace std;
bool searchElement(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {3,5,7,4,9,12,10,13,22,25};
    // if 22 is present so return 1 & not so return 0;
    int size = 10;
    cout<<"Enter key which you want to search: ";
    int key;
    cin>>key;

    bool found = searchElement(arr, size, key);
    if(found){
        cout<<"Element is found";
    }
    else{
        cout<<"Element is not Found";
    }

    return 0;
}
