#include <iterator>
#include <string>
#include <fstream>
#include <iostream>
#include <set>
#include <algorithm>

int main() {

  std::string inputfilename, outputfilename;

  std::cin >> inputfilename >> outputfilename;

  std::ifstream inputfile  { inputfilename  };
  std::ofstream outputfile { outputfilename };

  using istritr = std::istream_iterator< std::string >;
  using ostritr = std::ostream_iterator< std::string >;

  std::set< std::string > words { istritr { inputfile }, istritr {} };

  std::copy( words.begin(), words.end(), ostritr { outputfile, "\n" } );

  return !inputfile.eof() || !outputfile;

}
