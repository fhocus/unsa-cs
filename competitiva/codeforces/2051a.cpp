#include <iostream>
#include <vector>

int main()
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int ans = 0;
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::vector<int> b(n);

    for (int i = 0; i < n; ++i)
      std::cin >> a[i];

    for (int i = 0; i < n; ++i)
      std::cin >> b[i];

    for (int i = 0; i < n - 1; ++i)
      if (a[i] > b[i + 1])
        ans += a[i] - b[i + 1];

    ans += a[n - 1];
    std::cout << ans << std::endl;
  }

  return 0;
}