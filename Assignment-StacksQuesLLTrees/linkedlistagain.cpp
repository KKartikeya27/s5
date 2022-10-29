#include<iostream>
using namespace std;
class Node
    {
        public:
        int data;
        Node* next;
    };
class LinkedList
    {
        public:
        Node* Head=NULL;

        void append(int a)
            {
                Node* temp=new Node;
                temp->data=a;
                Node* traverse=Head;
                if(Head==NULL)
                    {
                        Head=temp;
                        temp->next=NULL;
                        traverse=Head;
                    }
                else
                    {
                        while(traverse->next!=NULL)
                            {
                                traverse=traverse->next;
                            }
                        traverse->next=temp;
                        temp->next=NULL;
                    }
            }
        void print()
         {
                Node* traverse=Head;
                while(traverse->next!=NULL)
                    {
                        cout<<traverse->data<<endl;
                        traverse=traverse->next;
                    }
                cout<<traverse->data<<endl;
            }
    };
int main()
    {
        int n,a;
        cout<<"enter number of elements to add:";
        cin>>n;
        LinkedList LL;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            LL.append(a);

        }
        LL.append(1);
        LL.append(3);
        LL.append(5);
        LL.append(6);
        LL.print();
        
    }

