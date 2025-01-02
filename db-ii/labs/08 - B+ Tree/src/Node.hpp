#ifndef NODE_HPP
#define NODE_HPP

template <typename KeyType, typename ValueType>
class Node
{
public:
  Node(KeyType, ValueType);
  Node(Node<KeyType, ValueType> *);
  ~Node();

  bool isLeaf() const;
  void setIsLeaf(bool);

  const KeyType &getKey() const;

  const ValueType &getValue() const;

  Node<KeyType, ValueType> *getLeft() const;
  void setLeft(Node<KeyType, ValueType> *);

  Node<KeyType, ValueType> *getRight() const;
  void setRight(Node<KeyType, ValueType> *);

  Node<KeyType, ValueType> *getParent() const;
  void setParent(Node<KeyType, ValueType> *);

private:
  bool _isLeaf;
  KeyType _key;
  ValueType _value;
  Node<KeyType, ValueType> *_left;
  Node<KeyType, ValueType> *_right;
  Node<KeyType, ValueType> *_parent;
};

template <typename KeyType, typename ValueType>
Node<KeyType, ValueType>::Node(KeyType key, ValueType value)
{
  this->_isLeaf = false;
  this->_key = key;
  this->_value = value;
  this->_left = nullptr;
  this->_right = nullptr;
  this->_parent = nullptr;
}

template <typename KeyType, typename ValueType>
Node<KeyType, ValueType>::Node(Node<KeyType, ValueType> *node)
{
  this->_isLeaf = false;
  this->_key = node->getKey();
  this->_value = node->getValue();
  this->_left = nullptr;
  this->_right = nullptr;
}

template <typename KeyType, typename ValueType>
Node<KeyType, ValueType>::~Node()
{
  if (this->_left != nullptr)
    delete this->_left;

  if (this->_right != nullptr)
    delete this->_right;
}

template <typename KeyType, typename ValueType>
bool Node<KeyType, ValueType>::isLeaf() const
{
  return this->_isLeaf;
}

template <typename KeyType, typename ValueType>
void Node<KeyType, ValueType>::setIsLeaf(bool isLeaf)
{
  this->_isLeaf = isLeaf;
}

template <typename KeyType, typename ValueType>
const KeyType &Node<KeyType, ValueType>::getKey() const
{
  return this->_key;
}

template <typename KeyType, typename ValueType>
const ValueType &Node<KeyType, ValueType>::getValue() const
{
  return this->_value;
}

template <typename KeyType, typename ValueType>
Node<KeyType, ValueType> *Node<KeyType, ValueType>::getLeft() const
{
  return this->_left;
}

template <typename KeyType, typename ValueType>
void Node<KeyType, ValueType>::setLeft(Node<KeyType, ValueType> *left)
{
  this->_left = left;
}

template <typename KeyType, typename ValueType>
Node<KeyType, ValueType> *Node<KeyType, ValueType>::getRight() const
{
  return this->_right;
}

template <typename KeyType, typename ValueType>
void Node<KeyType, ValueType>::setRight(Node<KeyType, ValueType> *right)
{
  this->_right = right;
}

template <typename KeyType, typename ValueType>
Node<KeyType, ValueType> *Node<KeyType, ValueType>::getParent() const
{
  return this->_parent;
}

template <typename KeyType, typename ValueType>
void Node<KeyType, ValueType>::setParent(Node<KeyType, ValueType> *parent)
{
  this->_parent = parent;
}

#endif
