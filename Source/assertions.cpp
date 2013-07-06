#include <iostream>
#include <type_traits>

int main() {

   short int k=5;

   static_assert( sizeof(k) !=4, "Integers are not 4 bytes long");

   int l=5;

   static_assert( sizeof(l) !=4, "Integers are not 4 bytes long");

   return 0;
}
