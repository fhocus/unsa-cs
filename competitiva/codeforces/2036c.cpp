#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  int t;
  std::cin >> t;
  while (t--)
  {
    std::string s;
    int q, i;
    char v;
    std::cin >> s >> q;
    size_t pos = s.find("1100");
    bool found = pos != std::string::npos;
    while (q--)
    {
      std::cin >> i >> v;
      --i;
      if (s[i] != v)
      {
        s[i] = v;

        if (i >= pos && i <= pos + 3)
        {
          found = false;
        }

        for (int j = std::max(0, i - 3); j <= std::min((int)s.size() - 4, i); ++j)
        {
          if (s.substr(j, 4) == "1100")
          {
            pos = j;
            found = true;
            break;
          }
        }

        if (!found)
        {
          pos = s.find("1100");
          found = pos != std::string::npos;
        }
      }

      if (found)
        std::cout << "YES" << std::endl;
      else
        std::cout << "NO" << std::endl;
    }
  }
  return 0;
}