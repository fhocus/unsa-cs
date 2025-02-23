#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void solve()
{
  std::string s;
  std::cin >> s;

  bool has_repeat = false;

  for (int i = 0; i < s.size() - 1; ++i)
  {
    if (s[i] == s[i + 1])
    {
      has_repeat = true;
      break;
    }
  }

  if (has_repeat)
  {
    std::cout << "1" << std::endl;
  }
  else
  {
    std::cout << s.size() << std::endl;
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