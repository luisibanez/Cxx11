#include <forward_list>
#include <iostream>

int main() {

  typedef std::forward_list<int>   ListType;

  ListType l = { 1,2,3,4,5,6,7 };

  l.resize(9);
  l.resize(10,99);

  l.push_front(101);

  ListType::const_iterator itr = l.begin();
  ListType::const_iterator end = l.end();

  while( itr != end ) {
    std::cout << *itr << std::endl;
    ++itr;
    }

  return 0;
}
