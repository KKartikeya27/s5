#include<iostream>
using namespace std;
class Node
    {
        public:
        int data;
        Node* next;
    };
class Queue
    {
        public:
        Node* head=NULL;
        Node* tail=NULL;
        
        void Enqueue(int x)
            {
                Node* temp= new Node;
                temp->data=x;
                temp->next=NULL;
                if (tail==NULL)
                    {
                        tail=temp;
                        head=tail;
                    }
                else 
                    {
                        tail->next=temp;
                        tail=temp;
                    }
            }
        int Dequeue()
            {
                if(head==NULL) 
                    {
                        cout<<"Queue is empty cant dequeue";
                        return 0;
                    }
                else 
                    {
                        int throwx= head->data;
                        head=head->next;
                        return throwx;
                    }
            }
        void printq()
            {
                Node* traverse=head;
                while(traverse->next!=NULL)
                    {
                        cout<<traverse->data<<",";
                        traverse=traverse->next;

                    }
                cout <<traverse->data;
            }
    };
int main()
    {
        Queue q1;
        q1.Enqueue(5);
        q1.Enqueue(86);
        q1.Enqueue(23);
        q1.Enqueue(77);
        q1.Enqueue(51);
        q1.Enqueue(56);
        q1.Enqueue(3);
        q1.printq();
        cout<<endl;
        int dummy=q1.Dequeue();
        dummy=q1.Dequeue();
        q1.printq();
        return 0;
    }