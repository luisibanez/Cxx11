#include <vector>
#include <iostream>

int main() {

  std::vector<int> v;

  std::cout << "size = " << v.size() << std::endl;
  std::cout << "capacity = " << v.capacity() << std::endl;

  for(int i=0; i<10; ++i) {
    v.push_back(i);
    std::cout << "capacity = " << v.capacity();
    std::cout << " size = " << v.size() << std::endl;
    }

  for(int j=0; j<10; ++j) {
    std::cout << j << " : " << v[j] << std::endl;
    }

  return 0;
}
