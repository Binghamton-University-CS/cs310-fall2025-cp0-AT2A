#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal animal_input){
  numAnimals = 1;
  animal = animal_input;
};

AnimalsInZoo::AnimalsInZoo(): numAnimals(0){};

void AnimalsInZoo::display(){
  std::cout << "Number of Animals: " << numAnimals <<std::endl;
  animal.display();
};

