#include <iostream>


template < typename T, typename Q >
class Pair {


public:


   void f( T x, Q q ) {
     std::cout << x << " , " << q << std::endl;
     }


private:
   T t;
   Q q;
};


//
// Partial specialization, fixes one (or more parameters).
//
template < typename T >
using One = Pair<T, int>;



int main() {


  Pair< double, int >  tt;

  tt.f( 1.7, 5 );

  One< char >  cc;

  cc.f('a',17);

  return 0;
}
