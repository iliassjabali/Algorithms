// Constant const, macro, and enum //
#include <iostream>
// there many ways to decalation of const in c++ 1st is to put it right here before the main functon,
#define PI 3.14 // called const or macro as well;
using namespace std;

int main(int argc, char const *argv[]) {
// also u can define it here as classic way to decalar the const in this way
  const float Euler = 2; // right u got my joke 2.718
// also we there is another type of const is enum
  enum { y = 100 };
  cout << Euler << endl;
  cout << PI << endl;
  cout << y << endl;
}
// the results are:
//2
//3.14
//100
