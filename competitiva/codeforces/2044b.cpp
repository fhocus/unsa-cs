#include <iostream>
#include <vector>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    std::string s;
    std::cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
      if (s[i] == 'q')
        s[i] = 'p';
      else if (s[i] == 'p')
        s[i] = 'q';
    }

    std::string s2 = "";

    for (int i = s.size() - 1; i >= 0; --i)
    {
      s2 += s[i];
    }

    std::cout << s2 << std::endl;
  }
  return 0;
}