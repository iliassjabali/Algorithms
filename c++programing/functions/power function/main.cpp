#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main(){
      int base, expo;
      cout << "what is your base?";
      cin >> base;
      cout << "what is the expon";
      cin >> expo;

      double power = pow(base,expo);
      cout << power;
}
