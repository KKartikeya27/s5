#include<iostream>
#include<vector>
#include<array>
#include<stack>
#include<list>
#include<queue>
#include<map>
using namespace std;
int main()
    {
        // array<int,5>myarr={0,0,0,0,0};
        // cout<<myarr.size()<<endl;
        // myarr.at(1)=498;
        // myarr.at(0)=69;
        // for(int i=0;i<5;i++)
        //     {
        //         cout<<myarr.at(i)<<",";
        //     }




        // vector<int>v;
        // cout<<"size="<<v.capacity();

        stack<int>merastk;
        //      basically only 5 things are there:
        // push(), pop(), top(), size(), empty()
        // POP WILL JUST DELETE THE FIRST ELEMENT IT WONT SAVE INTO A VARIABLE. IE,
        // IT DOESNT RETURN ANY VALUE!!!
        
        
        // merastk.push(69);
        // merastk.push(420);
        // merastk.push(88);
        // merastk.push(14);
        // int dummy= merastk.top();
        // merastk.pop();
        // cout<<dummy<<endl<<merastk.top();
        // cout<<"removing one by one"<<endl;
        // while(!merastk.empty())
        //     {
        //         cout<<merastk.top()<<endl;
        //         merastk.pop();
        //     }



        //Queue: same operations as stack but instead of top() there's front() and back()
        // queue<string> myq;
        // myq.push("appa");
        // myq.push("amma");
        // myq.push("akka");
        // myq.push("kartik");
        // cout<<myq.front()<<endl;
        // cout<<myq.size();
        // myq.emplace("last?");
        // cout<<myq.back()<<endl;

        list<int>prime;
        prime.push_back(5);
        prime.push_back(54);
        prime.push_back(70);
        prime.push_back(79);
        for (auto i:prime)
            {
                cout<<i<<endl;
            }
        return 0;
    }