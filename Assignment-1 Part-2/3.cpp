// Using recursion, write a program which calculates 
// the Fibonacci series for any n

// 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610....
//   1,2,3,4,5,6, 7, 8, 9,10,11, 12, 13, 14, 15.....
#include<iostream>
using namespace std;

int main()
    {
        int n;
        cout<<"Enter number of terms of Fibonacci series required: "<<endl;
        cin>>n;
        Fibtilln(n);
        return 0;
    }