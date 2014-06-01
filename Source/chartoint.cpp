#include <iostream>

int main()
{

  for(char c; std::cin>>c;)
    {
    std::cout << "character " << c << " is " << int{c} << std::endl;
    }

  return 0;
}
