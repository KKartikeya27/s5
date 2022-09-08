#include<iostream>
using namespace std;
int main()
    {
        int n;
        cout<<"Enter n for nxn matrix:";
        cin>>n;
        int myMatrix [n][n];
        srand((unsigned int)time(NULL));     //seeding rand function
        for (int i=0;i<n<i++)
            {
                for (int j=0;j<n;j++)
                    {
                        myMatrix[i][j]=rand()%10;
                    }
            }
        

        return 0;
    }