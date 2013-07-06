#include <iostream>

using namespace std;

double square( double x ) {
  return x * x;
}

void print_square( double x ) {
  cout << "The square of " << x << " is " << square(x) << endl;
}

int main() {
   double d1 = 1.5;
   print_square(d1);
   double d2 = 1.7;
   print_square(d2);
   return 0;
}
