#include<iostream>
using namespace std;
int main()
    {
        int* varsize;
        int n,sum=0;
        varsize= new int[5];
        cout<<"Enter number of items to be added: ";
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter element number "<<i<<": ";
            cin>>varsize[i];

        }
        for (int i = 0; i < n; i++)
        {
            sum=sum+varsize[i];
        }
        cout<<sum<<endl;
        delete [] varsize;
        return 0;
    }