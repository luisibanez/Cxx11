
#include <regex>
#include <iostream>
#include <stdexcept>

int main() {

  std::string line;

  std::getline( std::cin, line );

  std::smatch matches;

  try {

    std::regex pattern (R"(\w{2}\s*\d{5}(-\d{4})?)");

    if( regex_search( line, matches, pattern ) ) {
      std::cout << matches[0] << std::endl;
      }

  }
  catch( std::exception & excp ) {
    std::cerr << excp.what() << std::endl;
  }

  return 0;
}
