#include<iostream>
#include<queue>
#include<list>
#include<unordered_map>
using namespace std;

void dfs(unordered_map<int,list<int>> &adjList,unordered_map<int,bool>&visited,int i,vector<int>&component)
{
    component.push_back(i);//store ans?
    visited[i]=true;

    //bar connected ke liye ek recursive call
    for(auto j:adjList[i])
        {
            dfs(adjList,visited,i,component);
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
            //for all nodes call dfs if not visited     
    vector<vector<int>> ans;        
    vector<vector<int>> DFS(int v)
    {
        for (int i = 0; i < v; i++)
        {
            if(!visited[i])
                {
                    vector<int>component; 
                    dfs(adjList,visited,i,component);
                    ans.push_back(component);
                }

        }
        return ans;
        
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
        cout<<"DFS code which will definitely throw an error: "<<endl;
        vector<vector<int>>a1=Gr1.DFS(v);
        for (auto i:a1)
            {
                cout<<a1[i]<<",";
             }

	return 0;
}