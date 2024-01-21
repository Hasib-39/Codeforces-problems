#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int r, c;
char grid[1005][1005];
int isVisited[1005][1005];
int maxLevel;
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

bool check(int x, int y)
{
    return x < 0 || y < 0 || x >= r || y >= c || grid[x][y] == 'T';
}
void bfs(pair<int, int> ss)
{
    queue<pair<int, int>> q;
    q.push(ss);
    isVisited[ss.first][ss.second] = 0;
    while (!q.empty())
    {
        auto temp = q.front();
        q.pop();
        if (grid[temp.first][temp.second] == 'S')
            maxLevel = isVisited[temp.first][temp.second];
        for (int i = 0; i < 4; ++i)
        {
            int newX = temp.first + dx[i];
            int newY = temp.second + dy[i];
            if (check(newX, newY) || isVisited[newX][newY] != -1)
                continue;
            isVisited[newX][newY] = isVisited[temp.first][temp.second] + 1;
            q.push(make_pair(newX, newY));
        }
    }
}

int main()
{
    cin >> r >> c;
    memset(isVisited, -1, sizeof isVisited);
    pair<int, int> end;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'E')
            {
                end.first = i;
                end.second = j;
            }
        }
    }
    bfs(end);
    int ans = 0;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if ((grid[i][j] > '0' && grid[i][j] <= '9') && isVisited[i][j] <= maxLevel && isVisited[i][j] != -1)
                ans += grid[i][j] - '0';
        }
    }
    cout << ans;
}