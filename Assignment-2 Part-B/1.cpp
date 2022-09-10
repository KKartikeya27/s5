// make a database of people who asked for rescue in 2019
// it should contain : name, number,location, number of people to be rescued
// program should be able to perform following operations:
// build a master table,search entry with number and sort list in decreasing order of no. of rescuees.

#include<iostream>
#include<string>
using namespace std;
class Victims
    {
        long long int phoneno;
        string name;
        string location;
        int rescuenum;
        public:
        // void setvalues(long long int,string,string,int);
        Victims(long long int,string,string,int);
        
        void printinfo()
            {
                cout<<phoneno<<name<<location<<rescuenum;
            }
    };
int main()
    {
        Victims raju(8928507574,"rajesh","Vakola",6);
        raju.printinfo();
        return 0;
    }

Victims::Victims(long long int ph,string naam,string loc,int rescnum)
    {
        phoneno=ph;name=naam;location=loc;rescuenum=rescnum;
    }








