#include<iostream>
#include<queue>
#include<list>
#include<unordered_map>
using namespace std;

void bfs(unordered_map<int,list<int>>&adjList,unordered_map<int,bool> &visited,int node)
    {
        queue<int> q;
        q.push(node);
        visited[node]=1;
        while(!q.empty())
            {
                int frontnode=q.front();
                q.pop();
                cout<<frontnode<<",";      //ANSWER
                for(auto i:adjList[frontnode])
                    {
                        if(!visited[i])
                            {
                                q.push(i);
                                visited[i]=1;
                            }
                    }
            }

    }
class Graph
{
	public:
	unordered_map<int,list<int>> adjList;
	unordered_map<int,bool>visited;

	void AddEdges(int n1,int n2)
	{
        adjList[n1].push_back(n2);
        adjList[n2].push_back(n1);
    }
	void AddEdgesdir(int n1,int n2)
	{
        adjList[n1].push_back(n2);
    }

  void PrintEdges()
            {
                for(auto i:adjList)
                    {
                        cout<<"Node "<<i.first<<"Is connected to-->";
                        for(auto j:i.second)
                            {
                                cout<<j<<",";
                            }
                        cout<<endl;
                    }
            }
    void BFS(int v)
    {
        for (int i = 0; i < v; i++)
        {
            if(!visited[i])
                {
                    bfs(adjList,visited,i);
                }

        }
        
        
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


        cout<<"BFS which wont work---------------------------"<<endl<<endl;
        Gr1.BFS(v);
	return 0;
}
