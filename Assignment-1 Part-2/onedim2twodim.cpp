#include<iostream>
using namespace std;
int main()
    {
        int n;
        cout<<"Enter number of elements in 1D array: "<<endl;
        cin>>n;
        unsigned int onedim[n];  //10 (READ: G++ extensions, only possible with vectors otherwise)
        srand((unsigned int)time(NULL)); //SEEDING Rand() function look it up.
        for (int i=0;i<n;i++)        //10 (READ: G++ extensions, only possible with vectors otherwise)
            {
                onedim[i]=rand()%10;
            }
        cout<<"Enter how you want to split the array: ";
        int r,c;
        cin>>r>>c;
        for (int i=0;i<n;i++)      //10 (READ: G++ extensions, only possible with vectors otherwise)
            {
                cout<<onedim[i];
            }

        int twodim[r][c];
        for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                    {
                        twodim[i][j]=onedim[c*i+j];
                    }
            }
        cout<<endl;
        for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                    {
                        cout<<twodim[i][j];
                    }
            }
        return 0;
    }