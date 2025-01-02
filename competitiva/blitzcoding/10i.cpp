#include <iostream>
#include <math.h>

bool isPrime(int n)
{
  if (n <= 1)
    return false;
  if (n == 2)
    return true;
  if (n % 2 == 0)
    return false;

  int raiz = std::sqrt(n);
  for (int i = 3; i <= raiz; i += 2)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int needToNextPrime(int n)
{
  int need = 0;
  while (!isPrime(n))
  {
    n++;
    need++;
  }
  return need;
}

void solve()
{
  int n, m, aux;
  std::cin >> n >> m;
  int mat[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      std::cin >> aux;
      mat[i][j] = needToNextPrime(aux);
    }
  }

  int minSumRows = 10e5;
  int minSumCols = 10e5;

  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = 0; j < m; j++)
      sum += mat[i][j];
    minSumRows = std::min(minSumRows, sum);
  }

  for (int i = 0; i < m; i++)
  {
    int sum = 0;
    for (int j = 0; j < n; j++)
      sum += mat[j][i];
    minSumCols = std::min(minSumCols, sum);
  }

  std::cout << std::min(minSumRows, minSumCols) << std::endl;
}

int main()
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}