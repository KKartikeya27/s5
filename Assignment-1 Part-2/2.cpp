#include<iostream>
using namespace std;
void intrst(long int P, int t,float r)
    {
        int quart;
        quart=t*4;
        for(int i =0;i<quart;i++)
            {
                P=P+(P*(r/4));
                cout<<P<<endl;


            }
    }

int main()
    {   
        long int P;
        int t;
        float r=0.6;
        cout<<"Enter beggining Balance and time for compounding";
        cin>>P>>t;
        intrst(P,t,r);
        // printer(P,t,interest);

        return 0;
    }

// quarters    Balance     intereset
//     0           pr          0
//     1           pr+in       pr+in-in
//     2         (pr+in)com   comp-(pr+in)
//     3         com2          com2-com1  