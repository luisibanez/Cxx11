
#include <iostream>
#include <string>


class Pair {
public:
    std::string name;
    int   number;
};


std::ostream & operator<<( std::ostream & os, const Pair & pair ) {
    os << "{\"" << pair.name << "\"," << pair.number << "}";
}


std::istream & operator>>( std::istream & is, Pair & pair ) {
   char c1,c2;
   if( is >> c1 && c1 == '{' && is >> c2 && c2 == '"' ) {

      std::string name;

      while( is.get(c1) && c1 != '"' ) {
          name += c1;
          }

      if( is >> c1 && c1 == ',' )  {
          int number;
          if( is >> number >> c1 && c1 == '}' )  {
            pair = { name, number };
            return is;
          }
     }
  }
  is.setstate( std::ios_base::failbit );
  return is;
}


int main() {

  Pair pair;


  std::cout << "Enter the pair" << std::endl;
  std::cin >> pair;

  std::cout << "we got " << std::endl;
  std::cout << pair << std::endl;


  return 0;
}

