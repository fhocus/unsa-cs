#include <iostream>
#include <vector>

int main()
{
  size_t n;
  std::cin >> n;

  size_t size = 1;
  for (size_t i = 0; i < n; i++)
    size *= 2;

  size_t m = size / 2;

  std::vector<std::string> v(n);

  for (size_t i = 0; i < n; i++)
  {
    int count = 1;
    char c = '0';
    for (int j = 0; j < size / m; j++)
    {
      v[i] += std::string(m, c);
      count++;
      if (count == 2)
      {
        count = 0;
        c = c == '0' ? '1' : '0';
      }
    }

    m /= 2;
  }

  for (size_t i = 0; i < size; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      std::cout << v[j][i];
    }
    std::cout << std::endl;
  }

  return 0;
}