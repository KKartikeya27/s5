#include<iostream>
using namespace std;
int main()
    {
        int randarray[50];
        int freq[10]={0,0,0,0,0,0,0,0,0,0};
        for (int i=0;i<50;i++)
            {
                randarray[i]=1+(rand()%10);
                cout<<randarray[i]<<",";
            }
        cout<<endl;
        for(int i=0;i<50;i++)
            {
                if (randarray[i]==1) freq[0]++;
                else if (randarray[i]==2) freq[1]++;
                else if (randarray[i]==3) freq[2]++;
                else if (randarray[i]==4) freq[3]++;
                else if (randarray[i]==5) freq[4]++;
                else if (randarray[i]==6) freq[5]++;
                else if (randarray[i]==7) freq[6]++;
                else if (randarray[i]==8) freq[7]++;
                else if (randarray[i]==9) freq[8]++;
                else freq[9]++;

            }
        for (int i=0;i<10;i++)
            {
                cout<<freq[i]<<",";
            }
        cout<<endl;
        return 0;
    }