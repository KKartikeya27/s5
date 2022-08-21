//Take a 6 digit number . Write a program to print it reversed 
// Also display the sum of its digits.
#include<iostream>
#include<math.h>
using namespace std;
int main()
    {
        int n;
        cout<<"Enter 6 digit number: ";
        cin>>n;
        int reverse=0,sum=0;
        for (int i=5;n>=1;n/=10,i--)
            {
                reverse=reverse + pow(10,i)*(n%10);
                sum=sum+(n%10);
            }
            cout<<"reversed digit= "<<reverse<<endl;
            cout<<"Sum= "<<sum<<endl;
        return 0;
    }