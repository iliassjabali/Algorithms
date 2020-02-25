#include <iostream>
#include <float.h>
using namespace std;


int main(int argc, char const *argv[]) {
  float a = 10.0/ 3; //how to fix the float point error "tricky" u have to use std::fixed for fixing the float problem in lage multipaltion cases to see the whole number of the degits;
  a = a * 10000000000000000;

  double b = 7.7E4; // here i used a scientific notation which means 7.7 * 10^4
  long double c;
  cout << fixed << a << endl;
  // we use float.h #include to check the max float digites of those type as following;
  cout << FLT_DIG << endl;
  cout << DBL_DIG << endl;
  cout << LDBL_DIG << endl;
  // the most usefull float type is double unlike the float can cause flaot pircices problem; however you still use the fixed fonction to solve this issaue, should be more carefull in using the right type of use case
}
