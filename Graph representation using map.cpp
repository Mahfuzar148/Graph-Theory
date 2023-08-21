#include<bits/stdc++.h>
using namespace std;

map<int, vector<int>> v; // Using a map to store adjacency lists

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (const auto& vertex : v) {
        cout << vertex.first; // Print the current vertex

        for (int connectedVertex : vertex.second) {
            cout << "->" << connectedVertex; // Print the connected vertices
        }
        cout << endl;
    }

    return 0;
}

