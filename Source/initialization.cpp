#include <vector>
#include <complex>
#include <iostream>

int main() {
  std::complex<double> z = 1;
  std::complex<double> y = { 1, 7 };
  std::complex<double> x { 2, 6 };
  std::cout << "x = " << x << std::endl;

  std::vector<int> a { 1,2,3,4,5 };

  int i = 7.5;
  std::cout << "i = " << i << std::endl;

  int j = { 7.5 };
  int k  { 7.5 };

  auto b = 5;
  auto f = 3.5;
  auto c = 'b';
  auto s = sqrt(f);

  std::cout << sizeof(s) << std::endl;
  return 0;

}
