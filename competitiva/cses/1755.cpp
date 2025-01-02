#include <iostream>
#include <map>
#include <set>
#include <algorithm>

int main()
{
  std::set<char> u;
  std::map<char, int> m;
  std::string s;
  std::cin >> s;
  int impar = 0;
  char imp = '_';

  for (char c : s)
  {
    m[c]++;
    u.insert(c);
  }

  for (char c : u)
    if (m[c] % 2 == 1)
    {
      impar++;
      imp = c;
    }

  if (impar > 1 || (impar == 1 && s.size() % 2 == 0))
    std::cout << "NO SOLUTION" << std::endl;
  else
  {
    std::string ans = "";
    for (char c : u)
    {
      if (c == imp)
        continue;
      ans += std::string(m[c] / 2, c);
    }

    std::string cpy = ans;
    if (imp != '_')
      ans += std::string(m[imp], imp);

    std::reverse(cpy.begin(), cpy.end());

    ans += cpy;

    std::cout << ans << std::endl;
  }

  return 0;
}