#include<iostream>
using namespace std;
void Fibb(int n)
    {
        int t1=1,t2=1,nexterm=0;
        if(n==1)    cout<<t1<<",";
        else if(n==2)   cout<<t2<<",";
        else
            {
                nexterm=t1+t2;
                t1=t2;
                t2=nexterm;
            }
    }
int main()
    {
        int num,t1=1,t2=1;
        cout<<"Enter number of terms: ";
        cin>>num;
        cout<<"Number(upto n)\t\tFacorial(n!)"<<endl;
        Fibb(n);
        return 0;
    }