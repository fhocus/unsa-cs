#include <iostream>

int main()
{
  std::string s;
  std::cin >> s;

  size_t maxSize = 0;
  size_t currentSize = 0;
  char currentChar = ' ';

  for (auto c : s)
  {
    if (c == currentChar)
      currentSize++;
    else
    {
      if (currentSize > maxSize)
        maxSize = currentSize;

      currentSize = 1;
      currentChar = c;
    }
  }

  if (currentSize > maxSize)
    maxSize = currentSize;

  std::cout << maxSize << std::endl;
}