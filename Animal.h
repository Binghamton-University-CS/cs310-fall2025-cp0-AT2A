#ifndef _Animal_
#define _Animal_
#include<iostream>
#include<stdlib.h>
class Animal{
 public:
  Animal(std::string speciesName, unsigned int discoveryYear);
  Animal();
  void display();
 private:
  std::string species;
  unsigned int year_discovered;

};
#endif
