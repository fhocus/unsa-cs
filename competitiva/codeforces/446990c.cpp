#include <iostream>
#include <map>
#include <queue>

int main()
{
  size_t n, k, w, l, max = 0;
  std::queue<size_t> q;
  std::map<size_t, size_t> m;

  std::cin >> n >> k;

  for (size_t i = 0; i < n; i++)
  {
    size_t a;
    std::cin >> a;
    q.push(a);
    m[a] = 0;
    if (max < a)
      max = a;
  }

  w = q.front();
  q.pop();

  while (m[w] < k)
  {
    if (max == w)
      m[w] = k;

    l = q.front();
    q.pop();

    if (w < l)
    {
      q.push(w);
      w = l;
    }
    else
    {
      q.push(l);
    }
    m[w]++;
  }

  std::cout << w << std::endl;

  return 0;
}