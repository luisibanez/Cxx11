//
// "What every random number library wants to be when it grows up".
//

#include <random>
#include <iostream>
#include <functional>
#include <vector>

int main() {

   using my_engine = std::default_random_engine;
   using my_distribution = std::uniform_int_distribution<>;

   my_engine re {};
   my_distribution one_to_six {1,6};

   auto die = std::bind( one_to_six, re );

   std::vector<int> histogram(6+1);

   histogram.assign(histogram.size(),0);

   for( int i=0; i<500; ++i ) {
      ++histogram[die()];
      }

   // note that we started at 1, and go up to 6
   for( int i = 1; i < histogram.size(); ++i ) {
      std::cout << i << " : ";
      for( int k = 0; k < histogram[i]; ++k ) {
        std::cout << "*";
        }
      std::cout << std::endl;
      }

   return 0;
}
