#include<iostream>
using namespace std;
int main()
    {
        cout<<"Mo\tTu\tWe\tTh\tFr\tSa\tSu\n";
        cout<<"\t\t\t\t";
        int day=1;
        for (int i=0;i<5;i++)
            {
                if(i==0)
                    {
                        for(int j=0;j<3;j++)
                            {
                                cout<<day<<"\t";
                                day++;
                            }        
                        cout<<endl;
                    }
                else if(i!=0&&day<=31)
                    {
                        for(int j=0;j<7;j++)
                            {
                                cout<<day<<"\t";
                                day++;
                            }
                cout<<endl;
                }
                
            }
        return 0;
    }