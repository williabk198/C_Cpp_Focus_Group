#include <iostream>

// include with quotes around the header file
// says to look for the header file locally
#include "Person.h"

int main (int argc, char **argv)
{
  // initalizes a variable 'me' to an instance
  // of an object called person
  Person me(argv[1], argv[2]);

  // To access member functions use '.' operator. Just like Java
  std::cout << "My name is: " << me.getFirstName() << " " 
	    << me.getLastName() << std::endl;

  // Create a Person using pointers. Very similar to Java.
  Person *you = new Person("Greg", "Hughes");

  // To access member funtions, use must use the '->' operator
  // This dereferences the ponter so that the member funtions
  // or variables can be accessed.
  std::cout << "My name is: " << you->getFirstName() << " " 
	    << you->getLastName() << std::endl;

  // Must delete pointers variable
  // that you initialize with keyword 'new' 
  delete you; //Mua-haha I deleted you!
}
