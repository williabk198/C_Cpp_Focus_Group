#include <iostream>

#include "Person.h"

int main (int argc, char **argv)
{
  Person me(argv[1], argv[2]);

  std::cout << "My name is: " << me.getFirstName() << " " 
	    << me.getLastName() << std::endl;

  Person *you = new Person("Greg", "Hughes");

  std::cout << "My name is: " << you->getFirstName() << " " 
	    << you->getLastName() << std::endl;

  delete you;
}
