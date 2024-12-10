#include <iostream>

int main()
{
  int t;
  int n, m;
  std::string s;

  std::cin >> t;
  while (t--)
  {
    int count = 0;
    std::cin >> n >> m;
    while (n--)
    {
      std::cin >> s;
      m -= s.size();
      if (m >= 0)
      {
        count++;
      }
    }

    std::cout << count << std::endl;
  }

  return 0;
}