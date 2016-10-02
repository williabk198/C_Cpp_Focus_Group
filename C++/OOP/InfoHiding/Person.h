#ifndef _PERSON_H_
#define _PERSON_H_

class Person
{

public:
  Person( char *, char *); // Prototype function for constuctor
  char* GetFirstName() const; // Prototype function for GetFirstName
  char* GetLastName() const; // Prototype function for GetLastName

  /* 
   * Prototype functions states the name, return type and parameters
   * of a function to be implemeted somewhere else. In this case the
   * implementation is in another file: Person.cpp
   */
  
 private:
  char* first_name_;
  char* last_name_;

};

#endif
