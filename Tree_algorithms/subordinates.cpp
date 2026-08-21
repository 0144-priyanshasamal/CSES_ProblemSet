#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<int> subtree;

void dfs(int node) {
    subtree[node] = 1;              // count itself

    for (int child : tree[node]) {
        dfs(child);
        subtree[node] += subtree[child];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    tree.resize(n + 1);
    subtree.resize(n + 1);

    for (int i = 2; i <= n; i++) {
        int boss;
        cin >> boss;
        tree[boss].push_back(i);
    }

    dfs(1);

    for (int i = 1; i <= n; i++)
        cout << subtree[i] - 1 << " ";

    return 0;
}