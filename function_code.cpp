
#include<iostream>
using namespace std;
int update(int n)
{
    n = n/2;
    return n;
}
int main()
{
    int n;
    cin>>n;

    int ans = update(n);
    cout<< ans <<endl;
}
