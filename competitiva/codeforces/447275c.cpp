#include <iostream>
#include <algorithm>
#include <set>

int main()
{
  int n, ans;
  std::cin >> n;

  bool has_ans = false;

  std::set<int> imp;

  for (int x = 1; x <= n; ++x)
  {
    bool is_universal_sink = true;

    if (imp.find(x) != imp.end())
      continue;

    for (int y = 1; y <= n; ++y)
    {
      if (x == y)
        continue;
      std::cout << "? " << y << " " << x << std::endl;
      std::cin >> ans;
      if (ans == 0)
      {
        is_universal_sink = false;
        break;
      }
      else
        imp.insert(y);
    }

    if (is_universal_sink)
    {
      std::cout << "! " << x << std::endl;
      has_ans = true;
      break;
    }
  }

  if (!has_ans)
    std::cout << "! -1" << std::endl;
  return 0;
}