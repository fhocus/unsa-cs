#include <iostream>
#include <stack>
#include <map>
#include <vector>

int main()
{
  int n;
  std::cin >> n;

  std::stack<int> a, b, c;
  std::map<int, char> map;
  int next = 1;
  int current = 0;
  int cant = 0;
  std::vector<std::string> moves;

  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    a.push(x);
    map[x] = 'a';
  }

  bool flag = true;
  char station = map[next];

  while (!a.empty() || !b.empty())
  {
    if (station == 'a')
    {
      current = a.top();
      a.pop();
    }
    else if (station == 'b')
    {
      current = b.top();
      b.pop();
    }

    if (map[current] == 'a')
    {
      if (current == next)
      {
        moves.push_back("A C");
        c.push(current);
        map[current] = 'c';
        next++;
        station = map[next];
      }
      else
      {
        moves.push_back("A B");
        b.push(current);
        map[current] = 'b';
        station = map[next];
      }
    }
    else
    {
      if (current == next)
      {
        moves.push_back("B C");
        c.push(current);
        map[current] = 'c';
        next++;
        station = map[next];
      }
      else
      {
        flag = false;
        break;
      }
    }
    cant++;
  }

  if (flag)
  {
    std::cout << cant << std::endl;
    for (auto m : moves)
    {
      std::cout << m << std::endl;
    }
  }
  else
  {
    std::cout << "-1" << std::endl;
  }

  return 0;
}