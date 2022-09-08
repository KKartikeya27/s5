/*
Write a C++ program to take three 6 digit numbers as input from the user.
all the numbers have to be modified in the decreasing order of digits
and find the largest of 3 modified numbers.
(For example, if the user enters a 3 digit number 318,
 its modified number is 831).
*/

#include<iostream>
using namespace std;
void digitiser(int,int*);
void sorter(int*);
int main()
    {
        int n1;
        cout<<"Enter n1: "<<endl;
        cin>>n1;
        int p1[6];
        digitiser(n1,p1);
        sorter(p1);
        for (int i = 0; i < 6; i++)
        {
            cout<<p1[i];
        }
        cout<<endl;
        return 0;
    }
void digitiser(int n,int * p)
    {
        
        for (int i = 0; i < 6; i++,n/=10)
        {
            p[i]=n%10;
        }
    }

void sorter(int*p)
    {
        int temp;
        for(int k=0;k<4;k++)
            {
                for (int i = 0; i < 5; i++)
                    {
                        if(p[i]<=p[i+1])
                            {
                                temp=p[i];
                                p[i]=p[i+1];
                                p[i+1]=temp;
                            }
                        else continue;
                    }
            }
        
    }