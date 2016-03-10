// First program

#include <iostream>

using namespace std;

// initiate function called main
int main() {

  // std::cout == STandarD Character OUTput device
  cout << "Hellow World";
  cout << "I'm a C++ program";

  // declaring variables
  // ways to declare variables

  // c-like initialization
    // type identifier = initial_value
      // int x = 0;

  // constructor initialization
    // type identifier (initial_value)
      // int x (0);

  // uniform initialization
    // type identifier {initial_value}
      // int x {0};

  int a = 5;   // initial value: 5
  int b(3);    // initial value: 3
  int c{2};    // initial value: 2
  int result;  // initial value: undetermined

  // type deduction auto
  int foo{0};
  auto bar = foo;    // the same as: int bar = foo;
  // bar is declared as having the same type as foo
  int foo{0};
  decltype(foo) bar;  // the same as: int bar

  // process
  a = a + b;
  result = a - c;

  // print out the result
  cout << result;

  // terminate the program
  return 0;

}
