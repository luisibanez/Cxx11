#include <iostream>
#include <complex>

void printme() { std::cout << "End of recursion" << std::endl; }

template <typename Head, typename... Tail>
void printme( Head head, Tail... tail ) {
   std::cout << head << std::endl;
   printme( tail... );
}

int main() {

  printme( 4, "hello", 1.7, std::complex<float>(1) );

  return 0;
}
