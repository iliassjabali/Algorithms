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
int main(){
    int base, expo;
    cout << "entre the base";
    cin >> base;
    cout << "entre the exponent";
    cin >> expo;

    double Mypower = power(base, expo);
    cout << Mypower << std::endl;

}
