#include <string>
#include <iostream>

std::string compose( const std::string & s1, const std::string & s2 ) {
    return s1 + '@' + s2;
}

void m3()
{
   std::string name = "Niels Stroustrup";
   std::cout << name << std::endl;
   std::string s = name.substr(6,10);
   std::string r = name.replace(0,5,"nicolas");
   name[0] = std::toupper( name[0] );
   std::cout << r << std::endl;
   std::cout << s << std::endl;
   std::cout << name << std::endl;
}


int main() {

  auto addr = compose( "Linus", "Torvalds" );

  std::cout << addr << std::endl;

  if( addr == "Linus@Torvalds" ) {
   std::cout << "success" << std::endl;
   }

  m3();

  return 0;
}
