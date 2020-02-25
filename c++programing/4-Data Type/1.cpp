#include <iostream>
#include <climits>

// this namespace used for the output ref to Consol.out
using std::cout;

int main(int argc, char const *argv[]) {
  // there are many diffrent types of integer in c++, which is that each one has diffrent memory size;
  // short, int, long, long long.
  short a;
  int b;
  long c;
  long long d;

  // there is Unsigned type, can stored only the postive inputs, and they have the same memory size as the normal types.
  unsigned short aa; //has 4bit
  unsigned int bb;  // has 8 bit
  unsigned long cc; // 16 bit
  unsigned long long dd; // 32 bit

  // how to check the size of each type
  cout << sizeof(int) << std::endl;
// in order to check the max OR min of data type size, you can use those following Functions "u must import this #include <climits>"
// SHRT_MAX, INT_MAX, LONG_MAX, SHRT_MIN, INT_MIN...
  cout << SHRT_MAX << std::endl;
  return 0;
}
