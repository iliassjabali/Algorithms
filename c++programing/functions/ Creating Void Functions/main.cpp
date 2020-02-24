#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
double power(double base, double exponent){
   double result = 1;
    for (int i; i<exponent; i++){
        result = result * base;

    }return result;
}
void print_f(double base, double expo){

  double Mypower = power(base, expo);
  cout << base <<  "rasie to the " <<expo<< "power is " <<Mypower << std::endl;
}
int main(){
    int base, expo;
    cout << "entre the base";
    cin >> base;
    cout << "entre the exponent";
    cin >> expo;
    print_f(base,expo)
}
