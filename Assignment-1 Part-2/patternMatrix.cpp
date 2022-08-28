#include<iostream>
using namespace std;
int main()
    {
        int sqmatrix;
        cout<<"Enter order of sqmatrix: "<<endl;
        cin>>sqmatrix;
        for(int i=0;i<sqmatrix;i++)
            {
                for (int j=0;j<sqmatrix;j++)
                    {
                        if (j<(sqmatrix-1-i)) cout<<"1 ";
                        else if ((j==sqmatrix-1-i)) cout<<"0";
                        else if ((j>sqmatrix-1- i)) cout<<"-1";
                    }
                cout<<endl;
            }




        return 0;
    }



// 1  1  1  1  1  0
// 1  1  1  1  0 -1
// 1  1  1  0 -1 -1
// 1  1  0 -1 -1 -1
// 1  0 -1 -1 -1 -1
// 0 -1 -1 -1 -1 -1