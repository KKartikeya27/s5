#include<iostream>
using namespace std;
int main()
    {
        cout<<"Enter a 4 digit number:  ";
        int num;
        cin>>num;
        if(num<999||num>9999)
            {
                cout<<"please enter a 4-digit number."<<endl;;
            }

        else
            {
                cout<<"the rightmost digit is "<<num%10<<endl;
            }

        return 0;
    }