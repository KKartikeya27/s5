#include<iostream>
using namespace std;
int main()
    {
        cout<<"Enter data for matrix: "<<endl;
        int matrix[9];
        cin>>matrix[0]>>matrix[1]>>matrix[2]>>matrix[3]>>matrix[4]>>matrix[5]>>matrix[6]>>matrix[7]>>matrix[8];
        for (int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                    {
                        cout<<matrix[3*i+j]<<"  ";
                    }
                cout<<endl;
            }




        return 0;
    }