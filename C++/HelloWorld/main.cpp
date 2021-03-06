#include <iostream> // This is a preprocessor directive
//Works similarly to Java's import

// Anything begining with '#' is a preprocessor directive and does not need
// a semi-colon to close it. The new line character does that for you.
// These preprocessor directives are carried out just before compilation
// of the file

//using namespace std; //you can use this but it is typically bad practice

//argc is the number of command line arguments.
//argv are the arguments themselves
int main(int argc, char ** argv)
{


  // cout << "Hello World" << endl; //Bad practice

  // :: is the scope resolution operator.
  // It basically says use cout from the std namespace
  // << is the output stream operator.
  // The left most definition is typically the output stream
  // in this case it is std::cout which prints to the terminal
  std::cout << "Hello World" << std::endl; //prefered practice

  // argv[0] stores the command used to start the program.
  // actual parameters start at index 1
  std::cout << "You passed " << argv[1] << " as an agrument" << std::endl;

  int input;
  int input2;
  char input3;

  // >> is the input
  std::cin >> input >> input2 >> input3;

  std::cout << input << " " << input2 << " " << input3;

  return 0;
}
