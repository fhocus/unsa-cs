#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void solve()
{
  std::string s;
  std::cin >> s;

  for (int i = 0; i < s.size() - 2; ++i)
  {
    std::cout << s[i];
  }

  std::cout << "i" << std::endl;
}

int main()
{
  long long int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}