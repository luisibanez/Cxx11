#include <iostream>
#include <string>


int main() {


  char cc;
  std::cin >> cc;
  std::cout << cc << std::endl;


  int ii;
  std::cin >> ii;
  std::cout << ii << std::endl;

  std::cout << "Please enter your name\n";
  std::string ss;

  // flush from previous entries
  std::cin.ignore(255,'\n');
  // needed when mixing the >> operator with getline().

  std::getline(std::cin,ss);
  std::cout << "Hello " << ss << "!\n";


  return 0;
}
