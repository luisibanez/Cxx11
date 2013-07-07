
#include <tuple>
#include <string>

int main() {

   std::tuple< std::string, int, double > tt( "Sild", 123, 3.14 );
   auto qq = make_tuple( std::string("Herring"), 10, 1.23 );

   std::string s = std::get<0>( qq );
   int i = std::get<1>( qq );
   double d = std::get<2>( qq );

   return 0;
}
