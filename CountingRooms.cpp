#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> vis;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {
    vis[x][y] = true;

    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];

        if (nx >= 0 && nx < n &&
            ny >= 0 && ny < m &&
            !vis[nx][ny] &&
            grid[nx][ny] == '.') {

            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;

    grid.resize(n);
    vis.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
        cin >> grid[i];

    int rooms = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (grid[i][j] == '.' && !vis[i][j]) {
                rooms++;
                dfs(i, j);
            }
        }
    }

    cout << rooms << endl;
}
