#include<bits/stdc++.h>
using namespace std;
vector<int>graph[1001];
bool vis[1001];
void BFS(int root)
{

    stack<int>q;
    q.push(root);
    while(!q.empty())
    {
        int src = q.top();
        q.pop();

        for(int i=0;i<graph[src].size();i++)
        {
            int adj = graph[src][i];

            if(vis[adj]==0)
            {
                cout<<adj<<" ";
                vis[adj] = 1;
                q.push(adj);
            }
        }

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
    BFS(1);

}
