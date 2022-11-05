#include<iostream>
#include<stack>
using namespace std;
class Node
    {
        public:
        int data;
        Node* next;
        
    };
class Stack
    {
        public:
        Node* top=NULL;
        

        void push (int x)
            {
                Node* temp= new Node;
                temp->data=x;
                temp->next=NULL;
                if (top==NULL)  top=temp;
                else 
                    {
                        Node* tem =top;
                        top=temp;
                        temp->next=tem;
                    }
            }
        void printstaack()
            {
                Node* traverse=top;
                while(traverse->next!=NULL)
                    {
                        cout<<traverse->data<<",";
                        traverse = traverse->next;
                    }
                cout<<traverse->data<<endl;
            }
    };
    int main()
        {
            Stack s1;
            s1.push(9);
            s1.push(92);
            s1.push(4);
            s1.push(66);
            s1.printstaack();
            stack<int> S2;
            S2.push(52);
            S2.push(10);
            S2.push(5);
            S2.pop();
            cout<<S2.empty();
            cout<<S2.top();

            return 0;
        }