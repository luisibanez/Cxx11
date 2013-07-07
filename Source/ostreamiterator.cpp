#include <iostream>
#include <iterator>
#include <string>

int main() {

  std::ostream_iterator< std::string > oo { std::cout, ", " };

  *oo = "Hello";
  ++oo;
  *oo = "World\n";

  return 0;

}
