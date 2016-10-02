// The preprocessor directives have conditional statements
// in this case it is checking to see if the macro
// '_PERSON_H_' is not defined (hence ifndef). If it is not
// the it would go to the next line and define _PERSON_H_
// and continue going through the rest file.
//
// If _PERSON_H_ was defined then it would jump to the #endif
// and continue reading the file after it.
//
// #ifndef _MACRO_NAME_  \
// #define _MACRO_NAME_   \
//                         > This is called the preprocessor wrapper.
// (code here)            /
// #endif                /
//
// The preprocessor wrapper prevents multiple copies of
// the same header file to exist at one time

#ifndef _PERSON_H_
#define _PERSON_H_

//#pragma once // This is another way of doing the preprocessor wrapper
               // and is prefered way since macro names can potentially
               // collide with one another.

class Person
{

public:
  Person( char *first_name, char *last_name )
    :_first_name(first_name), _last_name(last_name) {}

  // Returns the first name
  //
  // The const means constant. This signifies that
  // the function does not alter the class in any
  // way shape or form.
  char* getFirstName() const 
  {
    return _first_name;
  }

  // Ruturns the last name of the person
  char* getLastName() const
  {
    return _last_name;
  }

 private:

  char* _first_name;
  char* _last_name;

};

#endif
