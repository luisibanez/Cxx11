#include <list>
#include <iostream>

int main() {

  typedef std::list< char >  ListType;

  ListType l;

  for(int c='a'; c<='z'; ++c) {
    l.push_back(c);
    }

  ListType::const_iterator itr = l.begin();
  while( itr != l.end() ) {
    std::cout << *itr << std::endl;
    ++itr;
    }

  while( ! l.empty() ) {
    std::cout << l.front() << std::endl;
    l.pop_front();
    }

  return 0;
}
