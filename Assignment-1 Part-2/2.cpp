#include<iostream>
using namespace std;


void printer(long int P,int q,float diff)
    {
        cout<<q+1<<"\t\t\t"<<P<<"\t\t\t"<<diff<<endl;
    }



void intrst(long int P, int t,float r)
    {
        int quart;float diff=0;long int Ptemp;
        quart=t*4;
        for(int i =0;i<quart;i++)
            {
                Ptemp=P;
                P=P+(P*(r/4));
                diff=P-Ptemp;
                printer(P,i,diff);


            }
    }



int main()
    {   
        long int P;
        int t;
        float r=0.6;
        cout<<"Enter beggining Balance and time for compounding(in years): ";
        cin>>P>>t;
        //Printing columns here
        cout<<"Quarter(s)            Balance             Interest earned"<<endl;
        intrst(P,t,r);

        return 0;
    }

// quarters    Balance     intereset
//     0           pr          0
//     1           pr+in       pr+in-in
//     2         (pr+in)com   comp-(pr+in)
//     3         com2          com2-com1  