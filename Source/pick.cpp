#include <iostream>

bool get3(void) {

  int tries = 1;
  char pick = ' ';

  while( tries < 4 ) {

     std::cout << "Take your pick" << std::endl;
     std::cin >> pick;

     switch( pick ) {
       case 'y':
          std::cout << "yes " << std::endl;
          return true;
       case 'n':
          std::cout << "no " << std::endl;
          return false;
       default:
          std::cout << "try again... " << std::endl;
          tries++;
     }
  }

}

int main() {

   const bool answer = get3();
   std::cout << "anwser = " << answer << std::endl;

   return 0;
}
