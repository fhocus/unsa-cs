#include <iostream>
#include <stack>
#include <map>
#include <vector>
#include <algorithm>

void deleteDuplicates(int child, std::map<int, std::vector<int>> &adj)
{
  for (int i = 0; i < adj[child].size(); ++i)
  {
    deleteDuplicates(adj[child][i], adj);
  }
}

void dfs(int child, int past, std::map<int, std::vector<int>> &adj, int &sum)
{
  if (past == child)
    return;
  if (adj[child].size() == 0)
    return;
  else
  {
    for (int i = 0; i < adj[child].size(); ++i)
    {
      if (adj[child][i] == past)
        continue;
      sum++;
      dfs(adj[child][i], child, adj, sum);
    }
  }
}

int main()
{
  int n, u, v, ans = 1;
  std::cin >> n;
  std::map<int, std::vector<int>> adj;
  std::vector<int> dist;

  for (int i = 0; i < n - 1; ++i)
  {
    std::cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  /*
  for (int i = 0; i < n - 1; ++i)
  {
    std::cout << i + 1 << " -> ";
    for (int j = 0; j < adj[i + 1].size(); ++j)
    {
      std::cout << adj[i + 1][j] << " ";
    }
    std::cout << std::endl;
  }
  */
  // deleteDuplicates(1, adj);

  std::vector<int> children1 = adj[1];

  for (int i = 0; i < children1.size(); ++i)
  {
    int sum = 1;
    dfs(children1[i], 1, adj, sum);
    dist.push_back(sum);
  }

  std::sort(dist.begin(), dist.end());
  for (int i = 0; i < dist.size() - 1; ++i)
  {
    ans += dist[i];
  }

  std::cout << ans << std::endl;

  return 0;
}