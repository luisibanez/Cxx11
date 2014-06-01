#include <iterator>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

int main() {

  std::vector< std::string > words;

  copy(std::istream_iterator<std::string>(std::cin),
       std::istream_iterator<std::string>(),
       std::back_inserter(words));

  sort(words.begin(), words.end());

  unique_copy(words.begin(), words.end(),
       std::ostream_iterator<std::string>(std::cout,"\n"));

  return 0;
}
