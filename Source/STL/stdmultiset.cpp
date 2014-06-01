#include <set>
#include <string>
#include <iostream>

int main() {

  typedef std::multiset< std::string > MultisetType;

  MultisetType cities = { "Paris", "London", "Berlin", "New York" };

  cities.insert("New York");
  cities.insert("Atlanta");

  typedef MultisetType::const_iterator  Iterator;

  Iterator itr = cities.begin();
  Iterator end = cities.end();

  while( itr != end ) {
    std::cout << *itr << std::endl;
    ++itr;
    }

  return 0;
}
