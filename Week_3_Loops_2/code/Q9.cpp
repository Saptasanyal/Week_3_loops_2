// //Write a program to print out all Armstrong numbers between 1 and 500. 
//If the sum of cubes of each digit of the number is equal to the number 
//itself, then the number is called an Armstrong number.
#include<iostream>
using namespace std;

int main() 
{
    int sum, a, c;
    for(int i = 1; i <= 500; i++) 
    {
        sum = 0; 
        a = i;
        while(a != 0) 
        {
            c = a % 10;
            sum += c * c * c;
            a /= 10;
        }
        if(i == sum) {
            cout << i << endl;
        }
    }
    return 0;
}
