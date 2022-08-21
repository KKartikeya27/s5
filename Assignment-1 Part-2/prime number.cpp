#include<iostream>
#include<cmath>
using namespace std;
bool primechecker(int x)
    {
        int upperL=sqrt(x);
        for (int i=2;i<=upperL;i++)
            {
                if (x%i==0) 
                    {
                        return false;
                    }
                else continue;
            }
        return true;
    }


int main()
    {
        int N;
        cout<<"Enter value for N: "<<endl;
        cin>>N;
        cout<<"2,";
        for (int i=3;i<N;i++)
            {
                if(primechecker(i))
                    {
                        cout<<i<<",";
                    }
                else continue;
            }
    }