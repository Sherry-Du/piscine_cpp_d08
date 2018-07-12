#include "FruitBox.h"
#include "Banana.h"
#include "Lemon.h"
#include "Lime.h"
#include "LittleHand.h"

int main(void)
{
  FruitBox	test(5);
  FruitBox	test1(5);
  FruitBox	test2(5);
  FruitBox	test3(5);
  Fruit*	b = new Banana(); 
  Fruit*	bb = new Banana(); 
  Fruit*	l = new Lemon(); 
  Fruit*	li = new Lime(); 
  LittleHand	tri;
  test.putFruit(b);
  test.putFruit(bb);
  test.putFruit(l);
  test.putFruit(li);
  std::cout << test.nbFruits() << std::endl;
   std::cout << test.pickFruit()->getName() << std::endl;
   std::cout << test.pickFruit()->getName() << std::endl;
   std::cout << test.pickFruit()->getName() << std::endl;
  std::cout << test.pickFruit()->getName() << std::endl;
  test.putFruit(b);
  test.putFruit(bb);
  test.putFruit(l);
  test.putFruit(li);
  tri.sortFruitBox(test, test1, test2, test3);
//std::cout << test.nbFruits()<< "---" << test.pickFruit()->getName() << std::endl;
std::cout << test1.nbFruits() << "---" << test1.pickFruit()->getName() <<  std::endl;
std::cout << test2.nbFruits() << "---" << test2.pickFruit()->getName() <<  std::endl;
std::cout << test3.nbFruits() << "---" << test3.pickFruit()->getName() <<  std::endl;
  delete b;
  delete bb;
  delete l;
  delete li;
  return 0;
}
