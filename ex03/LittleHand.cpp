#include "LittleHand.h"

LittleHand::LittleHand()
{}

LittleHand::~LittleHand()
{}

void LittleHand::sortFruitBox(FruitBox& unsorted,
				FruitBox& lemons,
				FruitBox& bananas,
				FruitBox& limes)
{
  FruitBox tmp(unsorted.nbFruits());
  Fruit* ret;
  while (unsorted.head() && unsorted.head()->elem)
  {
    if (unsorted.head()->elem->getName() == "banana")
    {
      ret = unsorted.pickFruit();
      if (!(bananas.putFruit(ret)))
        tmp.putFruit(ret);
    }
    else if (unsorted.head()->elem->getName() == "lemon")
    {
      ret = unsorted.pickFruit();
      if (!(lemons.putFruit(ret)))
        tmp.putFruit(ret);
    }
    else if (unsorted.head()->elem->getName() == "lime")
    {
      ret = unsorted.pickFruit();
      if (!(limes.putFruit(ret)))
        tmp.putFruit(ret);
    }
    else
      tmp.putFruit(unsorted.pickFruit());
  }

  while (tmp.head() && tmp.head()->elem)
    unsorted.putFruit(tmp.pickFruit());

}

FruitBox* const* LittleHand::organizeCoconut(Coconut const* const* coconuts_packet)
{
  FruitBox** ret;
  int i = 0, j = 0;
  
  while (coconuts_packet[i])
    i++;
  if(i%6 > 0)
    ret = new FruitBox*[i/6 + 1];
  else
    ret = new FruitBox*[i/6];

  i = 0;
  while (coconuts_packet[i])
  {
    ret[j] = new FruitBox(6);
    for (int k = 0; k < 6; k++)
    {
      if (!coconuts_packet[i])
	return const_cast<FruitBox* const*>(ret);
      ret[j]->putFruit(coconuts_packet[i]);
      i++;
    }
    j++;
  }
  return const_cast<FruitBox* const*>(ret);
}

void LittleHand::plugMixer(MixerBase& mixer)
{
  mixer->_plugged = true;
}


