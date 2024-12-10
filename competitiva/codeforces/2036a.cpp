#include <iostream>
#include <vector>

void quintomania(std::vector<int> &a)
{
  for (int i = 0; i < a.size() - 1; ++i)
  {
    int rest = std::abs(a[i] - a[i + 1]);
    if (rest != 5 && rest != 7)
    {
      std::cout << "NO" << std::endl;
      return;
    }
  }
  std::cout << "YES" << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
      std::cin >> a[i];
    }
    quintomania(a);
  }
  return 0;
}