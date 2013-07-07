//
// "What every random number library wants to be when it grows up".
//

#include <random>
#include <iostream>
#include <functional>

int main() {

   using my_engine = std::default_random_engine;
   using my_distribution = std::uniform_int_distribution<>;

   my_engine re {};
   my_distribution one_to_six {1,6};

   auto die = std::bind( one_to_six, re );

   for( int i=0; i<50; ++i ) {
      std::cout << die() << std::endl;
      }

   return 0;
}
