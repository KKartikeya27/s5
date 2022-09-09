#include<iostream>
#include<string>
using namespace std;
int main()
    {
        string userstring;
        int spcount=0,vcount=0;
        getline(cin,userstring);
        for (int i = 0; i < userstring.length();i++)
        {
            if(userstring[i]=='a'||userstring[i]=='e'||userstring[i]=='i'||userstring[i]=='o'||userstring[i]=='u')  vcount++;
            else if (userstring[i]=='A'||userstring[i]=='E'||userstring[i]=='I'||userstring[i]=='O'||userstring[i]=='U') vcount++;
            else spcount++;
        }
        cout<<spcount<<" "<<vcount<<endl;
        return 0;
    }