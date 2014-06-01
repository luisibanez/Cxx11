#include <map>
#include <string>
#include <iostream>

int main() {

  typedef std::multimap< int, std::string > MapType;

  MapType mm = { { 4, "New York"},
                 { 5, "Atlanta" },
                 { 5, "Paris" },
                 { 2, "London" }
               };

  typedef MapType::const_iterator  Iterator;

  mm.insert( { 4, "Montreal" } );

  Iterator itr = mm.begin();
  Iterator end = mm.end();

  while ( itr != end ) {
    std::cout << itr->first << " : " << itr->second << std::endl;
    ++itr;
    }

  return 0;
}
