#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
class Graph
    {
        public:
        unordered_map<int,list<int>> adjlist;

        void AddEdgesdir(int n1, int n2)
            {
                adjlist[n1].push_back(n2);
            }
        void AddEdges(int n1, int n2)
            {
                adjlist[n1].push_back(n2);
                adjlist[n2].push_back(n1);
            }
        
        void PrintEdges()
            {
                for(auto i:adjlist)
                    {
                        cout<<"Node "<<i.first<<"Is connected to-->";
                        for(auto j:i.second)
                            {
                                cout<<j<<",";
                            }
                        cout<<endl;
                    }
            }
        queue <int> bfsq;
        int popval;
        void bfsrecurs(unordered_map<int,list<int>>::iterator itr)
            {
                for(auto k:itr->second) //enqueuing all of its adj nodes
                    {
                        //because itr is a pointer we have to dereference it using ->second.
                        bfsq.push(k);
                        cout<<k<<",";
                    }
                    //now we have a queue of all adjacent nodes of the first node.
                    popval=bfsq.front();
                    bfsq.pop();
                    unordered_map<int,list<int>>::iterator itrp =adjlist[popval];
                    bfsrecurs(itrp);
                
            }
        void BFS()
            {
                //taking the first element of the map. we are free to take anyone
                unordered_map<int,list<int>>::iterator itrp=adjlist.begin(); //begin returns a pointer to first 'key' in map
                bfsrecurs(itrp);              
            }
    };




int main()
    {   
        int v,e,a,b;
        bool dir;
        Graph Gr1;
        cout<<"Enter number of vertices: ";
        cin>>v;
        cout<<"Enter number of edges: ";
        cin>>e;
        cout<<"Do you want a digraph or not? 1: yes, 0: no";
        cin>>dir;
        for (int i = 0; i < e; i++)
        {
            cin>>a>>b;
            if(dir){
                Gr1.AddEdgesdir(a,b);
            }
            else Gr1.AddEdges(a,b);
        }
        Gr1.PrintEdges();



        // Breadth first search implementation:
        //pick a random node.... lets pick the first node in the map.
        //read its adjacency list one by one
        //any node you reach, enqueue it first.
        //once all nodes are 'read' or enqueued, dequeue the next node and continue the process

        return 0;
    }