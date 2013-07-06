#include <iostream>

constexpr double square(double x ) {
  return x * x;
  }

int main() {
  const int ll = 5;
  int vv = 7;
  constexpr int qq = square(ll);

  switch(ll) {
    case qq:
      break;
    case 1:
      break;
    }

  int a[qq];

  std::cout << "qq = " << qq << std::endl;

  return 0;
}
