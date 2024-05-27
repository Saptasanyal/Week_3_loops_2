//Print first ‘n’ fibonacci numbers.

#include<iostream>
using namespace std;
int main(){
    int prod=1,n,b=1,c;
    cout<<"Enter the integer till where you want to print the series: ";
    cin>>n;
    if(n<=0)
    {
        cout<<"invalid input!"<<endl;

    }
    else
    {
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(n==2)
        {
            cout<<1<<endl<<1<<endl;
        }
        else{
            cout<<1<<endl<<1<<endl;
            for(int i=3;i<=n;i++)
            {
                
                c=prod+b;
                b=prod;
                prod=c;
                cout<<c<<endl;
            }
        }
    }
    return 0;
}