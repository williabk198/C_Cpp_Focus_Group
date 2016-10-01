#ifndef _PERSON_H_
#define _PERSON_H_

//#pragma once

class Person
{

public:
  Person( char *first_name, char *last_name )
    :_first_name(first_name), _last_name(last_name) {}

  char* getFirstName() const
  {
    return _first_name;
  }

  char* getLastName() const
  {
    return _last_name;
  }

 private:

  char* _first_name;
  char* _last_name;

};

#endif
