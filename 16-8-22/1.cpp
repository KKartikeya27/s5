//add and subtract 2 ints read from the keyboard and also calculate the product
// quotient and modulus
#include<iostream>
using namespace std;
int add (int,int); 
int subtract (int,int);
int mult (int,int);
float division (int,int);
int mod(int,int);
int main()
    {
        cout<<"Enter 2 integers: ";
        int n1,n2;
        cin>> n1>>n2;
        cout<<"a+b= "<<add(n1,n2)<<endl;
        cout<<"a-b= "<<subtract(n1,n2)<<endl;
        cout<<"a*b= "<<mult(n1,n2)<<endl;
        cout<<"a/b= "<<division(n1,n2)<<endl; 
        cout<<"a%b= "<<mod(n1,n2)<<endl;         
        
        return 0;
    }

int add(int a,int b)
    {
        return a+b;
    }
int subtract(int a,int b)
    {
        return a-b;
    }
int mult(int a,int b)
    {
        return a*b;
    }
int mod(int a,int b)
    {
        return a%b;
    }    
float division(int a,int b)
    {
        return float(a)/float(b);
    }