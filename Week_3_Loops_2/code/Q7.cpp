//Print the factorials of first ‘n’ numbers
#include<iostream>
using namespace std;
int main(){
    int prod=1,n;
    cout<<"Enter the integer till where you want to print the factorial: ";
    cin>>n;
    if(n==0||n==1)
    {
        cout<<1<<endl;
    }
    else if(n<0)
    {
        cout<<"Not defined"<<endl;

    }
    else
    {
        for(int i=2;i<=n+1;i++)
        {
            cout<<prod<<endl;
            prod*=i;
        }
    }
    return 0;
}