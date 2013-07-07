#include <string>
#include <vector>
#include <iostream>

std::vector< std::string::const_iterator > find_all( const std::string & s, char c ) {

   using itr = std::string::const_iterator;

   std::vector< itr > result;

   for( auto x = s.begin();  x != s.end(); ++x ) {
      if( *x == c )  {
        result.push_back( x );
      }
   }
   return result;
}

int main() {

  std::cout << "Enter string";
  std::string ss;
  std::cin >> ss;

  auto rr = find_all( ss, 's');

  for( auto x : rr ) {
     std::cout << *x << std::endl;
  }

  return 0;
}
