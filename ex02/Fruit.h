#ifndef FRUIT_
#define FRUIT_

#include <iostream>

class Fruit
{

public:
  Fruit(std::string const&, unsigned int);
  virtual ~Fruit();
  virtual std::string getName() const = 0;
  virtual unsigned int getVitamins() const;
  
 protected:
  std::string const _name;
  unsigned int _vitamins;
  
};

#endif
