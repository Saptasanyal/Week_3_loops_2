//WAP to print the sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    while(n>0)
    {
        if(n%2==0)
        {
            sum+=n%10;
            n/=10;
        }
        else
        {
            n/=10;
        }
        

    }
    cout<<"Sum of digits are: "<<sum;
    return 0;
}
