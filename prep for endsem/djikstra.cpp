#include<iostream>
#include<unordered_map>
#include<list>
#include<set>
#include<vector>
using namespace std;

class Graph
    {
        public:
        int source=0,vertexg=0;
        unordered_map<int,list<pair<int,int>>> adjList;
        Graph(int v){vertexg=v;}
        void AddEdgesdir(int n1, int n2,int weight)
            {
                adjList[n1].push_back(make_pair(n2,weight));
            }
        void AddEdgesundir(int n1, int n2, int weight)
            {
                adjList[n1].push_back(make_pair(n2,weight));
                adjList[n2].push_back(make_pair(n1,weight));
            }
        
        vector<int> djikstraprep()
        {
            vector<int>distance(vertexg,INT16_MAX);    //creation of infinite value array
            set <pair<int,int>> st;             //creating set on basis (distance,node)
            distance[source]=0;           //HARD CODING SOURCE DO NOT FORGET!!
            st.insert(make_pair(0,source)); 

            while (!st.empty())
                {
                    //fetch top node
                    auto top=*(st.begin());
                    int nodedistance=top.first;
                    int topnode=top.second;

                    st.erase(st.begin());

                    //traverse neighbours

                    for(auto neighbour: adjList[topnode])
                        {
                            if (nodedistance+neighbour.second<distance[neighbour.first])
                                {
                                    auto record=st.find(make_pair(distance[neighbour.first],neighbour.first));
                                    //if record found then erase it
                                    if (record !=st.end()){
                                        st.erase(record);
                                    }
                                    //distance update
                                    distance[neighbour.first]=nodedistance+neighbour.second;
                                    //record push in set
                                    st.insert( make_pair(distance[neighbour.first],neighbour.first));
                                }
                        }
                }
            return distance;
                
        }

    };



int main()
    {
        int v,e,a,b,w;
        bool dir;
        cout<<"Enter number of vertices: ";
        cin>>v;
        cout<<"Enter number of edges: ";
        cin>>e;

        cout<<"Do you want a digraph or not? 1: yes, 0: no";
        cin>>dir;
        cout<<"enter directed connections \n src end weight\n";
        Graph Gr1(v);
        for (int i = 0; i < e; i++)
        {
            cin>>a>>b>>w;
            if(dir){
                Gr1.AddEdgesdir(a,b,w);
            }
            else Gr1.AddEdgesundir(a,b,w);
        }
        vector<int>ans=Gr1.djikstraprep();
        for(int i=0;i<v;i++)
            {
                cout<<ans[i]<<",";
            }

    }