#include<iostream>
using namespace std;
int main()
    {
        cout<<"Please enter a number I will give you its factorial: ";
        int n;
        cin>>n;
        int fact_calc(int);
        int ans=fact_calc(n);
        cout<<ans<<endl;
        return 0;
    }

int fact_calc(int k)
    {
        
        if(k==0)
            return 1;
        else
            {
                return (k*fact_calc(k-1));

            }
    }