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
//appending at end:
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
//printing list       
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
//Insterting at beginning::
        void first(int a)
            {
                Node * tem= Head;
                Node *temp= new Node;
                Head= temp;
                temp->data=a;
                temp->next=tem;
            }
//insert at a position:
        void posins(int n,int a)
            {
                Node* traverse=Head;
                if(n==1)    first(a);
                else
                    {
                        while(n>1)
                            {
                                traverse=traverse->next;
                                n--;
                            }
                        Node* temnode= traverse;
                        Node* temp= new Node;
                        temp->data=a;
                        temp->next=traverse;
                        
                    }
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
        LL.first(69);
        LL.print();
    }

