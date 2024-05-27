//WAP to print the sum of a given number and its reverse.
#include<iostream>
using namespace std;
int main()
{
    int n,b,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    b=n;
    while(n>0)
    {
        sum=sum*10+n%10;
        n/=10;

    }
    cout<<b+sum;
    return 0;
}