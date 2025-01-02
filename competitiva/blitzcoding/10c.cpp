#include <iostream>

void solve()
{
  std::string s;
  char max = '0';
  int posMax = 0;
  std::cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] > max)
    {
      max = s[i];
      posMax = i;
    }
  }

  std::cout << posMax << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}