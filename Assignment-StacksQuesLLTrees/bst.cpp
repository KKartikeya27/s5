#include<iostream>
using namespace std;
class Node
    {
        public:
        int data;
        Node* left;
        Node* right;
    };
class BST
    {
        public:
        Node* Root;
        void insert(int a)
            {
                Node* temp= new Node;
                temp->data=a;
                temp->left=NULL;
                temp->right=NULL;
                if (Root==NULL)
                    {
                        Root=temp;
                    }
                else   
                    {
                        Node* traverse=Root;
                        
                        if(temp->data>traverse->data)
                            {
                                traverse->right=temp;
                            }
                        else if (temp->data<=traverse->data)
                            {
                                traverse->left=temp;
                            }
                    }
            }

    };

int main()
    {
        int x;
        Node* root=NULL;
        for(int i=0;i<15;i++)
        {
            int y=rand()/1000;
            root=insert(root,y);
        }
    }
//traverse->right!=NULL||traverse->left!=NULL