#ifndef _PERSON_H_
#define _PERSON_H_

class Person
{

public:
  Person( char *, char *);
  char* GetFirstName() const;
  char* GetLastName() const;

 private:
  char* first_name_;
  char* last_name_;

};

#endif
