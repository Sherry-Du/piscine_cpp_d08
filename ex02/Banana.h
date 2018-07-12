#ifndef BANANA_
#define BANANA_

#include <iostream>
#include "Fruit.h"

class Banana : public Fruit
{
public:
  Banana();
  ~Banana();
  virtual std::string getName() const;
};

#endif
