/// write a program to find a min & max elements of arrays.
#include<iostream>
using namespace std;
/// this array is return minimum values of arrys
int getMin(int num[], int size)
{
    int mini = INT_MAX;
    for(int i=0; i<size; i++){
            mini = min(mini, num[i]);
            //if(num[i] < min){
               // min = num[i];
            //}
    }
    return mini;
}
/// This function is return maximum values of arrays
int getMax(int num[], int size)
{
    int maxi = INT_MIN;

    for(int i=0; i<size; i++){
            maxi = max(maxi, num[i]);
        //if(num[i] > max){
            //max = num[i];
        //}
    }
    return maxi;
}
int main()
{
    int size;
    cin>>size;

    int num[100];
    for(int i=0; i<size; i++)
    {
        cin>>num[i];
    }
    cout<<"maximun values is: " << getMax(num,size) << endl;
    cout<<"minimun values is: " << getMin(num,size) << endl;
}
