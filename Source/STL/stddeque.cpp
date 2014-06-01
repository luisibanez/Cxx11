#include <deque>
#include <iostream>

int main() {

  typedef std::deque<int> DequeType;
  DequeType d;

  for(int i=0; i<5; ++i) {
    d.push_back(i);
    }

  for(int i=5; i<10; ++i) {
    d.push_front(i);
    }

  for(int j=0; j<10; ++j) {
    std::cout << j << " : " << d[j] << std::endl;
    }

  return 0;
}
