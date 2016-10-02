#include "Person.h"

// The scope resolution operator(::) is used here to say
// from the Person class we want to define x.
// Where x is the method you defined in the class 
Person::Person(char * first_name, char * last_name)
  :first_name_(first_name), last_name_(last_name) {}

char* Person::GetFirstName() const
{
  return first_name_;
}

char* Person::GetLastName() const
{
  return last_name_;
}
