#include <iostream>
#include <math.h>

std::pair<size_t, std::pair<int, int>> getData(std::string n)
{
  size_t sum = 0;
  int count2 = 0;
  int count3 = 0;
  for (char c : n)
  {
    sum += c - '0';
    if (c == '2')
      ++count2;
    else if (c == '3')
      ++count3;
  }
  return std::make_pair(sum, std::make_pair(count2, count3));
}

int main()
{
  int t;
  std::string n;
  std::cin >> t;
  while (t--)
  {
    std::cin >> n;
    std::pair<size_t, std::pair<int, int>> data = getData(n);
    if (data.first % 9 == 0)
      std::cout << "YES" << std::endl;
    else
    {
      int count2 = data.second.first;
      int count3 = data.second.second;

      if (count2 == 0 && count3 == 0)
        std::cout << "NO" << std::endl;
      else
      {
        size_t max_number = ((data.first + (count2 * 2) + (count3 * 6)) / 9) * 9;
        size_t rest = 1;
        if (data.first % 2 != max_number % 2)
          max_number -= 9;

        for (size_t i = max_number; i >= data.first;)
        {
          rest = i - data.first;
          if (rest / 6 <= count3)
            rest %= 6;
          else
            rest -= count3 * 6;

          if (rest / 2 <= count2)
            rest %= 2;
          else
            rest -= count2 * 2;

          if (rest == 0)
            break;

          if (i < 18)
            break;
          i -= 18;
        }

        if (rest == 0)
          std::cout << "YES" << std::endl;
        else
          std::cout << "NO" << std::endl;
      }
    }
  }
}