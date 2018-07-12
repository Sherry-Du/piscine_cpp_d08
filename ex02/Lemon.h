#ifndef LEMON_
#define LEMON_

#include <iostream>
#include "Fruit.h"

class Lemon : public Fruit
{
public:
  Lemon();
  Lemon(std::string const& name, int vit);
  ~Lemon();
  virtual std::string getName() const;
};

#endif
