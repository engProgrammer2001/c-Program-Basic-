/// write a first program of array by using fucntions,

#include<iostream>
using namespace std;
void pritArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;

    pritArray(arr, size);

    return 0;
}
