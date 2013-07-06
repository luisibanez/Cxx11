#include <iostream>

class Vector {
public:
  Vector(int s) : elem { new double [s] }, sz{s} {}
  double & operator [](int i) { return elem[i]; }
  int size() { return sz; }

  Vector( Vector && v ) {
    std::cout << "move constructor" << std::endl;
    elem = v.elem;
    sz = v.sz;
    v.elem = nullptr;
    v.sz = 0;
  }

  Vector( const Vector & v ) {
    std::cout << "copy constructor" << std::endl;
    elem = new double[v.sz];
    sz = v.sz;
    for( int i=0; i<sz; ++i ) {
      elem[i] = v.elem[i];
      }
  }


private:
  double * elem;
  int sz;
};


int main() {

  Vector v(5);

  Vector Y( v );
  Vector w( std::move(v) );

  std::cout << "end" << std::endl;

  return 0;

}
