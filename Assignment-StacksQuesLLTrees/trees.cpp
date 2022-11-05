#include<iostream>
#include<math.h>
using namespace std;
class Node
    {
        public:
        int data;
        Node* left;
        Node* right;
    };
class Tree
    {
        public:
        Node* Root=NULL;        //initialising root pointer inside class
        // void insert(int a)
        //     {
        //         int depth=0,nodenum=0;
        //         Node* temp= new Node;
        //         temp->data=a;
        //         temp->left=NULL;
        //         temp->right=NULL;
        //         if(Root==NULL)  
        //             {
        //                 Root=temp;
        //                 nodenum++;
        //             }
        //         else   
        //             {
        //                 if(nodenum>pow(2,depth)&&nodenum<(pow(2,depth+1)+  ))
        //                 Node* traverse=Root;
        //                 if(traverse->left==NULL)
        //                     {

        //                     }

        //             }
                


        // }
        void Inorder(Node* root)        //defining inorder traversal function
            {
                if(root==NULL)  {return;}
                else
                    {
                        Inorder(root->left);
                        cout<<root->data<<" ";
                        Inorder(root->right);
                    }
            }
        void Preorder(Node* root)       //defining preorder traversal function 
            {
                if(root==NULL)  {return;}
                else
                    {
                    cout<<root->data<<" ";
                    Preorder(root->left);
                    Preorder(root->right);
                    }
            }
        void Postorder(Node* root)      //defining postorder traversal function
            {
            if(root==NULL){return;}
            else
                {
                Postorder(root->left);
                Postorder(root->right);
                cout<<root->data<<" ";
                }
            }


    };
int main()
    {
        Tree t1;
        
        
    }