#ifndef _AnimalsInZoo_
#define _AnimalsInZoo_
#include "Animal.h"


class AnimalsInZoo{
 public:
  AnimalsInZoo(Animal animal_input);
  AnimalsInZoo();
  void display();

private:
  unsigned int numAnimals;
  Animal animal;

};

#endif
