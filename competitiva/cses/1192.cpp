#include <iostream>
#include <algorithm>
#include <vector>

std::vector<std::vector<bool>> vis;
std::vector<int> dx = {1, 0, -1, 0};
std::vector<int> dy = {0, 1, 0, -1};

void dfs(int x, int y, std::vector<std::vector<char>> &table)
{
  for (int i = 0; i < 4; ++i)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx < 0 || nx >= (int)table.size() || ny < 0 || ny >= (int)table[0].size())
      continue;

    if (table[nx][ny] == '#' || vis[nx][ny])
      continue;

    vis[nx][ny] = 1;
    dfs(nx, ny, table);
  }
}

int main()
{
  int n, m;
  std::cin >> n >> m;
  std::vector<std::pair<int, int>> vac;
  std::vector<std::vector<char>> table(n, std::vector<char>(m));
  vis.resize(n, std::vector<bool>(m, 0));

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      std::cin >> table[i][j];
      if (table[i][j] == '.')
        vac.push_back(std::make_pair(i, j));
    }
  }

  int rooms = 0;

  for (std::pair<int, int> p : vac)
  {
    if (vis[p.first][p.second])
      continue;

    dfs(p.first, p.second, table);
    rooms++;
  }

  std::cout << rooms << std::endl;
}