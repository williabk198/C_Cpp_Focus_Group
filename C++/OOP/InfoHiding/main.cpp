#include <iostream>

#include "Person.h"

int main (int argc, char **argv)
{
  Person me(argv[1], argv[2]);

  std::cout << "My name is: " << me.GetFirstName() << " " 
	    << me.GetLastName() << std::endl;
}
