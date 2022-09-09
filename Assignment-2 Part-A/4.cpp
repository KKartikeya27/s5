/*
Write a C++ program to take three 6 digit numbers as input from the user.
all the numbers have to be modified in the decreasing order of digits
and find the largest of 3 modified numbers.
(For example, if the user enters a 3 digit number 318,
 its modified number is 831).
*/

#include<iostream>
#include<math.h>
using namespace std;
void digitiser(int,int*);
int sorter(int*);
int main()
    {
        int n1,n2,n3,s1,s2,s3;
        cout<<"Enter n1: "<<endl;
        cin>>n1;
        cout<<"Enter n2: "<<endl;
        cin>>n2;
        cout<<"Enter n3: "<<endl;
        cin>>n3;
        int p1[6],p2[6],p3[6];
        digitiser(n1,p1);   digitiser(n2,p2);   digitiser(n3,p3);
        s1=sorter(p1);  s2=sorter(p2);  s3=sorter(p3);
        cout<<"Greatest sorted number is: ";
        if(s1>=s2&&s1>=s3)  cout<<s1<<endl;
        else if(s2>=s1&&s2>=s3)  cout<<s2<<endl;
        else cout<<s3<<endl;
        return 0;
    }

void digitiser(int n,int * p)
    {
        
        for (int i = 0; i < 6; i++,n/=10)
        {
            p[i]=n%10;
        }
    }

int sorter(int*p)
    {
        int temp,final=0;
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
        for (int i = 0; i < 6; i++)
        {
            final+=(pow(10,i))*p[i];        
        }
        return final;
    }