/// write a program to find number is prime or not if given
/// number is prime so return 1 else return 0
#include<iostream>
using namespace std;
int isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int ans = isPrime(n);
    if(isPrime(n)){
        cout<<"Number is prime number";
    }
    else{
        cout<<"Number is not prime Number";
    }
    return 0;
}
