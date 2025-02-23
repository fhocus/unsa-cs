#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<size_t>> matrixMultiplication(std::vector<std::vector<size_t>> A, std::vector<std::vector<size_t>> B, size_t n)
{
  std::vector<std::vector<size_t>> res(n, std::vector<size_t>(n, 0));
  for (size_t i = 0; i < n; ++i)
    for (size_t j = 0; j < n; ++j)
    {
      for (size_t k = 0; k < n; ++k)
        res[i][j] += (A[i][k] * B[k][j]);

      res[i][j] %= 1000000007;
    }

  return res;
}

std::vector<std::vector<size_t>> matrixPower(std::vector<std::vector<size_t>> A, std::vector<std::vector<size_t>> B, size_t n, size_t L)
{
  while (L--)
    B = matrixMultiplication(B, A, n);

  return B;
}

int main()
{
  size_t n, L;
  std::cin >> n >> L;
  L--;

  std::vector<std::vector<size_t>> mat(n, std::vector<size_t>(n));
  for (size_t i = 0; i < n; ++i)
    for (size_t j = 0; j < n; ++j)
      std::cin >> mat[i][j];

  std::vector<std::vector<size_t>> res = matrixPower(mat, mat, n, L);

  std::cout << res[0][n - 1] << std::endl;

  return 0;
}