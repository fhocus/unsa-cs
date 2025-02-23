#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
#include <vector>

#define llong long long
#define ulong unsigned long long
#define mk(a, b) std::make_pair(a, b)
#define f first
#define s second
#define sortInc(v) std::sort(v.begin(), v.end())
#define sortInc(v, x) std::sort(v.begin() + x, v.end())
#define sortDec(v) std::sort(v.begin(), v.end(), std::greater<int>())
#define sortDec(v, x) std::sort(v.begin() + x, v.end(), std::greater<int>())

void solve()
{
  int n, m;
  std::cin >> n >> m;

  std::vector<std::vector<int>> adj(n);
  for (int i = 0; i < m; ++i)
  {
    int u, v;
    std::cin >> u >> v;
    u--;
    v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  std::map<int, int> memo;

  for (int i = 0; i < n; ++i)
    memo[adj[i].size()]++;

  int x, y;

  if (memo.size() == 2)
  {
    for (auto p : memo)
    {
      if (p.f == 1)
        continue;

      x = p.f;
      y = p.f - 1;
    }
  }
  else
  {
    for (auto p : memo)
    {
      if (p.f == 1)
        continue;

      if (p.s == 1)
        x = p.f;
      else
        y = p.f - 1;
    }
  }

  std::cout << x << " " << y << std::endl;
}

int main()
{
  llong t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}