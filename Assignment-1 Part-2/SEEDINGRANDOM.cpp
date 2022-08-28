#include<iostream>
using namespace std;
int main()
    {
        srand((unsigned int)time(NULL));     //seeding rand function
        for(int i=0;i<50;i++) cout<<rand()%10<<",";
        return 0;  
    }