//
//  decltype() returns the type of its argument.
//

#include <vector>

int main() {

  double f;

  std::vector< decltype(f) > g;

  return 0;
}
