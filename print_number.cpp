/// write a program to print a number acording to user inpur

#include<iostream>
using namespace std;
int printNumber(int n)
{
    for(int i=0; i<=n; i++)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;

    //function
    int ans = printNumber(n);
    return 0;
}
