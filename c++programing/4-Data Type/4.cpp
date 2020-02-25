#include <iostream>
// there many ways to decalation of const in c++ 1st is to put it right here before the main functon,
#define PI 3.14

using namespace std;


int main(int argc, char const *argv[]) {
// also u can define it here as classic way to decalar the const in this way
  const float Euler = 2; // right u got my joke 2.718
  cout << Euler << endl;
  cout << PI << endl;
}
// the result is 2 and 3.14
