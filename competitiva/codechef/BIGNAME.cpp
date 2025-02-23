#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void solve()
{
  int n;
  std::string s;
  std::cin >> n >> s;

  if (s == std::string(n, 'z'))
  {
    std::cout << -1 << std::endl;
  }
  else
  {
    std::cout << std::string(n, 'z') << std::endl;
  }
}

int main()
{
  long long int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}