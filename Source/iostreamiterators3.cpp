#include <iterator>
#include <string>
#include <fstream>
#include <iostream>
#include <set>
#include <algorithm>

int main(int argc, const char * argv [] ) {

  std::ifstream inputfile  { argv[1] };
  std::ofstream outputfile { argv[2] };

  using istritr = std::istream_iterator< std::string >;
  using ostritr = std::ostream_iterator< std::string >;

  std::set< std::string > words { istritr { inputfile }, istritr {} };

  std::copy( words.begin(), words.end(), ostritr { outputfile, "\n" } );

  return !inputfile.eof() || !outputfile;

}
