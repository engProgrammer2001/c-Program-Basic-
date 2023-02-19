/// write a program to find number is even or odd in c++;
#include<iostream>
using namespace std;
bool isEven(int num)
{
    //odd
    if(num&1)
    {
        return 0;
    }
    //Even
    return 1;
}
int main()
{
    int num;
    cin>>num;
    isEven(num);
    if(isEven(num)){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd";
    }
    return 0;
}
