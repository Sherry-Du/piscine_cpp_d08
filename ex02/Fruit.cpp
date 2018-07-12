#include "Fruit.h"

Fruit::Fruit(std::string const& name, unsigned int vit) : _name(name), _vitamins(vit)
{}

Fruit::~Fruit()
{}

unsigned int Fruit::getVitamins() const
{
  return _vitamins;
}
