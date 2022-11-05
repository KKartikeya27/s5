#include<iostream>
using namespace std;
#define M 100
class Stack
    {  
        int top;
        public:
        int arr[M];
        Stack(){top=-1;}
        bool push(int a)
            {
                if (top>=M-1)
                    {
                        cout<<"stack overflow";
                        return false;                  
                    }
                else    
                    {
                        top++;
                        arr[top]=a;
                        cout<<"vaalue pushed is"<<a<<endl;
                        return true;
                    }
            }
        int pop()
            {
                if (top<=-1) {cout<<"Stack underflow"<<endl;return 0;}
                else 
                    {
                        return arr[top--];
                    }
            }
        bool isEmpty()
            {
                if (top<=-1) 
                    {
                        cout<<"Stack is empty"<<endl;
                        return true;
                    }

            }
        int Top()
            {
                if (top<=-1) {isEmpty();return 0 ;} 
                else return arr[top];

            }
        void printstacc()
            {
                for (int i = 0; i <=top; i++)
                {
                    cout<<arr[i]<<",";
                }
                
            }
    };
int main()
    {
        Stack s1;
        s1.push(2);
        s1.push(3);
        s1.push(4);
        s1.push(5);
        s1.push(90);
        s1.printstacc();
        cout<<endl;
        int x=s1.pop();
        s1.printstacc();
        cout<<endl;
        cout<<"x is="<<x<<endl;
        return 0;
    }