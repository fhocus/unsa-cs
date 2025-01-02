#include <iostream>

#include "src/BPTree.hpp"

int main()
{
  BPTree<int, std::string> tree(3);

  tree.insert(1, "Uno");
  tree.insert(2, "Dos");
  tree.insert(3, "Tres");

  return 0;
}
