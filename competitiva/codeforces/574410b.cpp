#include <iostream>
#include <map>
#include <set>

int main()
{
  std::string a, b;
  std::cin >> a >> b;

  std::set<char> set_soup;
  std::map<char, int> map_a;
  std::map<char, int> map_b;

  for (auto c : a)
  {
    map_a[c]++;
    set_soup.insert(c);
  }
  for (auto c : b)
  {
    map_b[c]++;
    set_soup.insert(c);
  }

  for (auto c : set_soup)
  {
    for (int i = 0; i < std::max(map_a[c], map_b[c]); i++)
    {
      std::cout << c;
    }
  }

  std::cout << std::endl;

  return 0;
}