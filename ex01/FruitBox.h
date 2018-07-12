#ifndef FRUITBOX_
#define FRUITBOX_

#include "Fruit.h"
#include "FruitNode.h"

class FruitBox
{
public:
  FruitBox(unsigned int size);
  ~FruitBox();

  unsigned int nbFruits() const;
  bool putFruit(Fruit const* f);
  Fruit* pickFruit();
  FruitNode* head() const;

private:
  const unsigned int _size;
  FruitNode* _list;
  unsigned int _count;
};

#endif
