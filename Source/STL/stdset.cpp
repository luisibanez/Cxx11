#include <set>
#include <string>
#include <iostream>

int main() {

  typedef std::set< std::string > SetType;

  SetType cities = { "Paris", "London", "Berlin", "New York" };

  cities.insert("New York");
  cities.insert("Atlanta");

  typedef SetType::const_iterator  Iterator;

  Iterator itr = cities.begin();
  Iterator end = cities.end();

  while( itr != end ) {
    std::cout << *itr << std::endl;
    ++itr;
    }

  return 0;
}
