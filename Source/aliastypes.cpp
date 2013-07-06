#include <iostream>


template < typename T >
class MyClass {
public:

  using value_type = T;

  typedef T  value_type_2;

  void dosomething(const T & t) {
     std::cout << t << std::endl;
     }
};


int main() {

   // with aliases...

   using mc = MyClass<double>;

   using value_type = mc::value_type;

   value_type tt = 6.0;

   mc m;

   m.dosomething( tt );

   // with typedefs...

   typedef MyClass<double>  mcd;

   typedef mcd::value_type_2  value_type_2;

   value_type_2 qq = 6.0;

   mcd dd;

   dd.dosomething( qq );

   return 0;
}
