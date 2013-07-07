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

  std::istream_iterator< std::string > isitr { inputfile };
  std::ostream_iterator< std::string > ositr { outputfile, "\n" };

  std::istream_iterator< std::string > eos {};

  std::set< std::string > str { isitr, eos };

  std::copy( str.begin(), str.end(), ositr );

  return !inputfile.eof() || !outputfile;

}
