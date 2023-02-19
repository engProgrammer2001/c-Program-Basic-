/// write a program to make function.

#include<iostream>
using namespace std;
int update(int n)
{
    n -= 5;
    return n;
}
int main()
{
    int n;
    cin>>n;
    update(n);
    cout << n << endl;
    return 0;
}
