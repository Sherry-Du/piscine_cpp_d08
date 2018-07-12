#ifndef MIXERBASE_
#define MIXERBASE_

class MixerBase
{
public:
  MixerBase();
  int mix(FruitBox&) const;
protected:
  bool _plugged;
  int (*_mixfunc)(FruitBox&);
};

#endif
