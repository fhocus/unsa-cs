#ifndef BPTREE_HPP
#define BPTREE_HPP

#include <iostream>
#include "Node.hpp"

template <typename KeyType, typename ValueType>
class BPTree
{
public:
  BPTree(unsigned int);
  ~BPTree();

  void insert(const KeyType &key, const ValueType &value);
  const ValueType &find(const KeyType &key) const;

private:
  unsigned int degree;
  Node<KeyType, ValueType> *root;
  void insertInternal(Node<KeyType, ValueType> *, Node<KeyType, ValueType> *, Node<KeyType, ValueType> *);
  unsigned int getDegree(Node<KeyType, ValueType> *) const;
  void balance(Node<KeyType, ValueType> *);
};

template <typename KeyType, typename ValueType>
BPTree<KeyType, ValueType>::BPTree(unsigned int degree)
{
  this->degree = degree;
  this->root = nullptr;
}

template <typename KeyType, typename ValueType>
BPTree<KeyType, ValueType>::~BPTree()
{
  if (this->root != nullptr)
    delete root;
}

template <typename KeyType, typename ValueType>
void BPTree<KeyType, ValueType>::insert(const KeyType &key, const ValueType &value)
{
  if (this->root == nullptr)
  {
    this->root = new Node<KeyType, ValueType>(key, value);
    this->root->setIsLeaf(true);
    return;
  }

  Node<KeyType, ValueType> *currentNode = this->root;
  Node<KeyType, ValueType> *prevNode = nullptr;
  Node<KeyType, ValueType> *newNode = new Node<KeyType, ValueType>(key, value);
  newNode->setIsLeaf(true);

  while (!currentNode->isLeaf())
  {
    prevNode = currentNode;
    if (key < currentNode->getKey())
      currentNode = currentNode->getLeft();
    else
      currentNode = currentNode->getRight();
  }

  int currentDegree = this->getDegree(currentNode);
  std::cout << "Current degree: " << currentDegree << std::endl;
  Node<KeyType, ValueType> *initialNode = currentNode;

  this->insertInternal(prevNode, currentNode, newNode);

  if (currentDegree + 1 == this->degree)
    this->balance(initialNode);
}

template <typename KeyType, typename ValueType>
const ValueType &BPTree<KeyType, ValueType>::find(const KeyType &key) const
{
  std::cout << this->root->getLeft()->getRight()->getKey() << std::endl;
  std::cout << this->root->getRight()->getKey() << std::endl;
  return this->root->getValue();
}

template <typename KeyType, typename ValueType>
void BPTree<KeyType, ValueType>::insertInternal(Node<KeyType, ValueType> *prevNode, Node<KeyType, ValueType> *currentNode, Node<KeyType, ValueType> *newNode)
{
  while (newNode->getKey() > currentNode->getKey() && currentNode->getRight() != nullptr)
  {
    prevNode = currentNode;
    currentNode = currentNode->getRight();
  }

  if (newNode->getKey() > currentNode->getKey())
  {
    newNode->setRight(currentNode->getRight());
    currentNode->setRight(newNode);
  }
  else if (newNode->getKey() < currentNode->getKey() && prevNode == nullptr)
  {
    newNode->setRight(currentNode);
    this->root = newNode;
  }
  else if (newNode->getKey() < currentNode->getKey() && prevNode != nullptr)
  {
    if (prevNode->isLeaf())
    {
      prevNode->setRight(newNode);
      newNode->setRight(currentNode);
    }
    else
    {
      newNode->setRight(currentNode);
      prevNode->setLeft(newNode);
    }
  }
}

template <typename KeyType, typename ValueType>
unsigned int BPTree<KeyType, ValueType>::getDegree(Node<KeyType, ValueType> *node) const
{
  if (node == nullptr)
    return 0;

  Node<KeyType, ValueType> *currentNode = node;
  unsigned int degree = 1;

  while (currentNode->getRight() != nullptr)
  {
    currentNode = currentNode->getRight();
    degree++;
  }

  return degree;
}

template <typename KeyType, typename ValueType>
void BPTree<KeyType, ValueType>::balance(Node<KeyType, ValueType> *node)
{
  std::cout << "BALANCING" << std::endl;
  Node<KeyType, ValueType> *initialNode = node;
  Node<KeyType, ValueType> *currentNode = initialNode;

  for (int i = 0; i < this->degree / 2; i++)
    currentNode = currentNode->getRight();

  Node<KeyType, ValueType> *cloneNode = new Node<KeyType, ValueType>(currentNode);

  if (initialNode->getParent() == nullptr)
  {
    cloneNode->setRight(currentNode);
    cloneNode->setLeft(initialNode);
    initialNode->setParent(cloneNode);
    currentNode->setParent(cloneNode);
    this->root = cloneNode;
  }
}

#endif
