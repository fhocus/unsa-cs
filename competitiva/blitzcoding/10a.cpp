#include <iostream>

void solve()
{
  size_t size = 0;
  std::string s;
  std::cin >> s;
  char last = s[0];

  if (s.size() == 1)
  {
    std::cout << s << std::endl;
    return;
  }

  for (char c : s)
  {
    if (c != last)
    {
      std::cout << size << last;
      last = c;
      size = 1;
    }
    else
      size++;
  }

  std::cout << size << last;

  std::cout << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}