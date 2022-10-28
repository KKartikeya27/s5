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
                Node*traverse=Head;
                while(traverse!=NULL)
                    {
                        traverse=traverse->next;
                    }
                traverse->next=temp;
                temp->next=NULL;
            }
        void print()
         {
                Node*traverse=Head;
                while(traverse!=NULL)
                    {
                        cout<<traverse->data<<endl;
                        traverse=traverse->next;
                    }

            }
    };
int main()
    {
        cout<<"enter number of elements to add:";
        int n,a;
        LinkedList LL;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            LL.append(a);

        }
        LL.print();
        
    }

