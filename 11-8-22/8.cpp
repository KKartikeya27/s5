#include<iostream>
using namespace std;
int main()
    {
        float a,b;
        cout<<"Enter operands: ";
        cin>>a>>b;
        char operation;
        DECISION: //LABEL
        cout<<"Please enter operation to perform with operands. (+,-,*,/): "<<endl;
        cin>>operation;
        if(operation=='+')
            {
                cout<<"You chose addition. Sum is: "<<a+b;
            }
        else if(operation=='-')
            {
                cout<<"You chose subtraction. difference is: "<<a-b;
            }
        else if(operation=='*')
            {
                cout<<"You chose multiplication. Product is: "<<a*b;
            }
        else if(operation=='/')
            {
                cout<<"You chose Division. Quotient is: "<<a/b;
            }
        else 
            {
                cout<<"enter a valid operation. Try again\n";
                goto DECISION;
            }
        return 0;
    }