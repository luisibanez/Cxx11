#include <iostream>

class A {
public:

  enum class RGB { red, green, blue };
  enum class Trafic { red, green, blue };

  enum RGB2 { red, green, blue };

public:
  A() {
   rgb = RGB::red;
   t = Trafic::blue;
   }

private:

  RGB rgb;
  Trafic t;

};

int main() {

  A a;

  std::cout << A::red << std::endl;

  int i = A::red;

  int k = A::RGB::blue;

  return 0;
}
