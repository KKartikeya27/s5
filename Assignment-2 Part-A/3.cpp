// Write a C++ program to print the following pattern.
//         0
//        101
//       21012
//      3210123
//     432101234
//    54321012345

#include<iostream>
using namespace std;
int main()
    {
        int I;
        for(int i=0;i<6;i++)
            {
                for(int j=0;j<5-i;j++) cout<<" ";
                I=i;
                for(int k=0;k<=I;k++) 
                    {
                        cout<<I-k;
                    }
                for(int l=1;l<=I;l++)
                    {
                        cout<<l;
                    }
                cout<<endl;
            }
        return 0;
    }