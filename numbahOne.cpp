// First program

#include <iostream>
#include <string>

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



  // intro to strings //

  // declare variable
  string mystring;
  mystring = "This is the initial string content";

  // print out string
  // endl == END Line
  cout << mystring << endl;

  // redefine mystring
  mystring {"This is a different string content"};

  // print out string
  cout << mystring << endl;



  // intro to constants //

    // numerical constants
      // 75   :: decimal (base 10)
      // 0113 :: octal (base 8)
      // 0x4b :: hexadecimal (base 16)

      /**
       *  Octal literals are preceded with a 0
       *  Hexadecimal literals are preceded with 0x
       */

       /**
        * Literal constants have a type.
        * Default type is int
        * Suffixes may be appended to specify a different integer type
        *
        * |Suffix    | Type modifier |
        * |----------|---------------|
        * | u or U   | unsigned      |
        * |----------|---------------|
        * | l or L   | long          |
        * |----------|---------------|
        * | ll or LL | long long     |
        * |----------|---------------|
        */
  75;    // int
  75u;   // unsigned int
  75l;   // long
  75ul;  // unsigned long
  75lu;  // unsigned long

  // Floating Point Numerals
  /**
   * Express real values with decimals and/or exponents.
   * Can include either a decimal point, an 'e' character (that express 'by ten at the Xth height') or both a decimal point and an 'e' character
   */
  3.14159;  // 3.14159
  6.02e23;  // 6.02 x 10^23
  1.6e-19;  // 1.6 x 10^-19
  3.0;      // 3.0

  /**
   * Default type for floating point literals is 'double'
   *
   * | Suffix  |    Type     |
   * |---------|-------------|
   * | f or F  |   float     |
   * |---------|-------------|
   * | l or L  | long double |
   * |---------|-------------|
   */
  3.14159L;   // long double
  6.02e23f;   // float



  // Character and String literals
  /**
   * Must be enclosed in quotes
   * single character literals are enclosed in single quotes
   * multiple character strings are enclosed in double quotes
   */
  'z';
  'p';
  "Hello world";
  "How do you do?";

  // Escape Codes
  /**
   * | Escape Code | Description           |
   * |-------------|-----------------------|
   * |   \n        | newline               |
   * |-------------|-----------------------|
   * |   \r        | carriage return       |
   * |-------------|-----------------------|
   * |   \t        | tab                   |
   * |-------------|-----------------------|
   * |   \v        | vertical tab          |
   * |-------------|-----------------------|
   * |   \b        | backspace             |
   * |-------------|-----------------------|
   * |   \f        | form feed (page feed) |
   * |-------------|-----------------------|
   * |   \a        | alert (beep)          |
   * |-------------|-----------------------|
   * |   \'        | single quote (')      |
   * |-------------|-----------------------|
   * |   \"        | double quote (")      |
   * |-------------|-----------------------|
   * |   \?        | question mark (?)     |
   * |-------------|-----------------------|
   * |   \\        | backslash(\)          |
   * |-------------|-----------------------|
   */

  string exampleStringOne;
  exampleStringOne {'\n'}; // newline

  string exampleStringTwo;
  exampleStringTwo {'\t'}; // tab

  string exampleStringThree;
  exampleStringThree {"Left \t Right"}; // tab within string

  string exampleStringFour;
  exampleStringFour {"one\ntwo\nthree"}; // newlines within string

  // print first string
  cout << exampleStringOne   << endl;
  // print second string
  cout << exampleStringTwo   << endl;
  // print third string
  cout << exampleStringThree << endl;
  // print fourth string
  cout << exampleStringFour  << endl;

  // Concatenation
  // Several string literals can be concatenated to form single string literal when separated by one or more blank spaces, tabs, newlines, and other valid blank characters.
    // "this forms "   "a single"  " string! "   "MAGIC!!" == "this forms a single string! MAGIC!! "

  // backslash at the end of a line is considered a line-continuation character that merges both that line and the next into a single line.
  string x;
  x = "string expressed in \
  two lines"; // equivalent to x = "string expressed in two lines"

  cout << x << endl;

  /**
   * Character and string literals default to type 'char'
   * A different type can be specified by using one of the following prefixes
   *
   * | Prefix  | Character Type |
   * |---------|----------------|
   * |   u     | char16_t       |
   * |---------|----------------|
   * |   U     | char32_t       |
   * |---------|----------------|
   * |   L     | wchar_t        |
   * |---------|----------------|
   *
   * There are two additional prefixes for string literals
   * | Prefix   | Description                              |
   * |----------|------------------------------------------|
   * |   u8     | string encoded in executable using UTF-8 |
   * |----------|------------------------------------------|
   * |   R      | string literal is a raw string           |
   * |----------|------------------------------------------|
   *
   * in raw strings, backslashes, single and double quotes are all valid characters.
   */



  // terminate the program
  return 0;

}
