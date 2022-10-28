#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int a)
        {
    Node* head=0;
            Node* temp;
            temp->data=a;
            Node* traverse= head;
            while(traverse!=0)
                {
                  traverse=traverse->next;  
                }
            traverse=temp;
            temp->next=0;
        }
};
int main()

    {
        cout<<"enter number of elements you wanna add:";
        int n,yeet;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>yeet;
            Node*temnode=new Node(yeet);
        }
        Node* traverse= head;
        while(traverse!=0)
                {
                  traverse=traverse->next;
                  cout<<traverse->data;  
                }
        

        return 0;
    }
