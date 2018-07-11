#ifndef LITLLEHANDS_
#define LITLLEHANDS_

#include "FruitBox.h"

class LittleHand
{
public:
  LittleHand();
  ~LittleHand();
  void sortFruitBox(FruitBox& unsorted,
			FruitBox& lemons,
			FruitBox& bananas,
			FruitBox& limes);
};

#endif
