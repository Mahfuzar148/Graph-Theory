#include<bits/stdc++.h>
using namespace std;
vector<int>graph[100005];
bool vis[100005];
int lvl[100005];
void bfs(int main_root)
{
    vis[main_root] = 1;
    deque<int>deq;
    deq.push_back(main_root);

    while(!deq.empty())
    {
        int src = deq.front();
        deq.pop_front();
        cout<<"Adjacent element of "<<src<<" = ";
        for(int i=0;i<graph[src].size();i++)
        {
            int adj = graph[src][i];
            cout<<adj<<" ";
            if(vis[adj]==1) continue;

            vis[adj] = 1;
            lvl[adj] = lvl[src]+1;
            deq.push_back(adj);

        }
        cout<<endl;
    }
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    while(edge--)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    /** graph value print in the form of list */
    for(int i=1;i<=node;i++)
    {
        cout<<i;
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<"-> "<<graph[i][j];
        }
        cout<<endl;
    }
    bfs(1);
    /** Distance of a node from root*/
    for(int i = 1; i<=node; i++)
       {
           cout<<lvl[i]<<endl;
       }
    return 0;

}
