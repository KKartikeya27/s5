#include<iostream>
using namespace std;
int main()
    {
        int price[4]= {14,200,55,51};
        // const int pr_1=14,pr_2=200,pr_3=55,pr_4=51;
        // int quant_1,quant_2,quant_3,quant_4;
        int quantity[4];
        // cout<<"Number of item 1's purchased: ";
        // cin>>quant_1;
        // cout<<"Number of item 2's purchased: ";
        // cin>>quant_2;
        // cout<<"Number of item 3's purchased: ";
        // cin>>quant_3;
        // cout<<"Number of item 4's purchased: ";
        // cin>>quant_4;

        for(int i=0;i<4;i++)
            {
                cout<<"number of item "<< i+1<< " purchased: ";
                cin>>quantity[i];
            }
        // cout<<quantity[0]<<quantity[1]<<quantity[2]<<quantity[3]<<endl;
        
        int bill[4];
        for (int i=0;i<4;i++)
            {
                bill[i]=price[i]*quantity[i];
            }
        cout<<"Item \t Per Unit Price \t Quantitity \tTotal"<<endl;
        for (int i=0;i<4;i++)
            {
                cout<<"Item "<<i+1<<"\t\t"<<price[i]<<"\t\t"<<quantity[i]<<"\t\t"<<bill[i]<<endl;

            }
        int sum=0;
        for (int i =0;i<4;i++)
            {
                sum=sum+bill[i];
            }
        cout<<"Total Bill amount*******\t\t\t"<<sum<<endl;



        return 0;
    }