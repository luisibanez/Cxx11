#include <stdexcept>
#include <iostream>

class Vector {
public:

  Vector(int s) : elem { new double[s] }, sz { s } {};

  ~Vector() {
    delete [] elem;
    elem = nullptr;
    sz = 0;
   }

   double operator[](int i) {
       if( i >= sz ) {
        throw std::out_of_range { "Vector::operator[]" };
       }
   }

private:
  double * elem;
  int      sz;

};

int main() {

  Vector v(10);

  try {
    int a = v[13];
  }
  catch( std::out_of_range & excpt ) {
    std::cerr << excpt.what() << std::endl;
  }

  return 0;

}
