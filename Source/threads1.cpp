
#include <thread>
#include <vector>
#include <iostream>
#include <stdexcept>


class F {
public:

   F( const std::vector<double> & vv) : v { vv } {};

   void operator()() {
     std::cout << "Executing F() " << std::endl;
     for( auto x : v ) {
       std::cout << "F() : " << x << std::endl;
       }
    }


private:
   const std::vector<double> & v;
};


void f( const std::vector<double> & v ) {
   std::cout << "Executing f() " << std::endl;
   for( auto x : v ) {
     std::cout << "f() : " << x << std::endl;
     }
}

void g() {
}

int main() {

   std::vector<double> v1 { 1,2,3,4,5,6,7,8,9 };
   std::vector<double> v2 { 2,4,6,8,10 };

   try {

     F u(v1);

     std::thread t1 { u };
     std::thread t2 { f, v2 };
     std::thread t3 { g };
     std::thread t4 { F { v2 } };

     t1.join();
     t2.join();
     t3.join();
     t4.join();

   }
   catch( std::exception & excp ) {
     std::cerr << "Exception: " << excp.what() << std::endl;
   }
   return 0;
}
