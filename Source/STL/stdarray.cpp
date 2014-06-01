#include <array>
#include <string>
#include <iostream>

int main() {

  typedef std::array< std::string, 5 > ArrayType;

  ArrayType a = { "Hello", "World" };

  for( int i = 0; i < a.size(); ++i ) {
    std::cout << a[i] << std::endl;
    }

  return 0;
}
