#include <iostream>
#include <vector>
using namespace std;

vector<int> grp[1002];
int vis[1003];

void DFS(int root) {
    vis[root] = 1;
    cout << root << "-> ";

    for (int i = 0; i < grp[root].size(); i++) {
        int child = grp[root][i];
        if (vis[child] == 0) {
            DFS(child);
        }
    }
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 1; i <= edges; i++) {
        int x, y;
        cin >> x >> y;
        grp[x].push_back(y);
        grp[y].push_back(x);
    }

    DFS(1);

    return 0;
}
/**
6 nodes, 7 edges
1 - 2 - 3
|   |   
4 - 5 - 6
Now, let's go through the code step by step:

We start by initializing an adjacency list representation of the graph using a vector of vectors called grp. We also initialize an array called vis to keep track of visited nodes.

grp[1] = [2, 4]
grp[2] = [1, 3, 5]
grp[3] = [2]
grp[4] = [1, 5]
grp[5] = [2, 4, 6]
grp[6] = [5]
vis is initially all 0s.
We call the DFS function with the starting node 1.

Inside the DFS function:

We mark the current node 1 as visited by setting vis[1] = 1.
We print the current node: 1 -> .
We iterate over the neighbors of node 1.
For child = 2:

Since vis[2] is 0 (not visited), we call DFS(2).
Inside the DFS function for 2:
We mark vis[2] = 1.
We print the current node: 2 -> .
We iterate over the neighbors of node 2.
For child = 1:
Since vis[1] is 1 (already visited), we skip it.
For child = 3:
Since vis[3] is 0 (not visited), we call DFS(3).
Inside the DFS function for 3:
We mark vis[3] = 1.
We print the current node: 3 -> .
We iterate over the neighbors of node 3.
For child = 2:
Since vis[2] is 1 (already visited), we skip it.
We have no more unvisited neighbors of node 3, so we return to the DFS function for 2.
We have no more unvisited neighbors of node 2, so we return to the DFS function for 1.
For child = 4:

Since vis[4] is 0 (not visited), we call DFS(4).
Inside the DFS function for 4:
We mark vis[4] = 1.
We print the current node: 4 -> .
We iterate over the neighbors of node 4.
For child = 1:
Since vis[1] is 1 (already visited), we skip it.
For child = 5:
Since vis[5] is 0 (not visited), we call DFS(5).
Inside the DFS function for 5:
We mark vis[5] = 1.
We print the current node: 5 -> .
We iterate over the neighbors of node 5.
For child = 2:
Since vis[2] is 1 (already visited), we skip it.
For child = 4:
Since vis[4] is 1 (already visited), we skip it.
For child = 6:
Since vis[6] is 0 (not visited), we call DFS(6).
Inside the DFS function for 6:
We mark vis[6] = 1.
We print the current node: 6 -> .
We iterate over the neighbors of node 6.
For child = 5:
Since vis[5] is 1 (already visited), we skip it.
We have no more unvisited neighbors of node 6, so we return to the DFS function for 5.
We have no more unvisited neighbors of node 5, so we return to the DFS function for 4.
We have no more unvisited neighbors of node 4, so we return to the DFS function for 1.
The DFS function for 1 has finished executing, and we have visited all nodes in the graph. The output of the code will be:

rust
Copy code
1 -> 2 -> 3 -> 4 -> 5 -> 6 ->


*/
