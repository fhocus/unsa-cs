#include <iostream>
#include <vector>

int main()
{
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);

  int n, k;
  std::cin >> n >> k;
  std::vector<int> a(n);

  for (int &l : a)
    std::cin >> l;

  for (int i = 0; i < k; i++)
  {
    int q;
    std::cin >> q;

    int l = -1;
    int r = n;

    while (r - l > 1)
    {
      int mid = l + (r - l) / 2;
      if (a[mid] <= q)
        l = mid;
      else
        r = mid;
    }

    if (l != -1 && a[l] == q)
      std::cout << "YES\n";
    else
      std::cout << "NO\n";
  }
}