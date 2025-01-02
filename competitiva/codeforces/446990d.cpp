#include <iostream>
#include <map>

int main()
{
  int n;
  size_t a, count = 0;
  std::cin >> n;

  std::map<size_t, size_t> m;

  for (int i = 0; i < n; i++)
  {
    std::cin >> a;
    m[a]++;
  }

  for (std::pair<size_t, size_t> ai : m)
  {
    if (ai.first == ai.second)
      continue;
    else if (ai.second < ai.first)
      count += ai.second;
    else
      count += ai.second - ai.first;
  }

  std::cout << count << std::endl;

  return 0;
}