#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

long long factorial(int n)
{
  long long result = 1;
  for (int i = 2; i <= n; ++i)
  {
    result *= i;
  }
  return result;
}

long long countPermutations(const std::string &str)
{
  std::map<char, int> frequency;
  for (char c : str)
  {
    frequency[c]++;
  }

  long long totalPermutations = factorial(str.size());
  for (const auto &[char_, freq] : frequency)
  {
    totalPermutations /= factorial(freq);
  }
  return totalPermutations;
}

int main()
{
  std::string s;
  std::cin >> s;

  std::cout << countPermutations(s) << std::endl;

  std::sort(s.begin(), s.end());

  do
  {
    std::cout << s << std::endl;
  } while (std::next_permutation(s.begin(), s.end()));

  return 0;
}