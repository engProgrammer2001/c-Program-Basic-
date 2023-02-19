/// write a program reverse of the number?

#include<iostream>
using namespace std;
void reverseElement(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start ++ ;
        end --;
    }
}
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int arr[10] = {2,4,6,8,12,13,15,23,46,50};
    int size = 10;
    reverseElement(arr, size);
    printArray(arr, size);

    return 0;

}
