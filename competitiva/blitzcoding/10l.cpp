#include <iostream>
#include <set>

void solve()
{
  int n;
  std::cin >> n;
  std::set<char> s;

  for (int i = 0; i < n; i++)
  {
    char c;
    std::cin >> c;
    s.insert(c);
  }

  if (s.size() >= n / 2)
    std::cout << n / 2 << std::endl;
  else
    std::cout << s.size() << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}