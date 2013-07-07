#include <iostream>
#include <memory>


class A {
public:
    A() {
      std::cout << "A constructor" << std::endl;
      }
    ~A() {
      std::cout << "A destructor" << std::endl;
     }
private:
};


std::shared_ptr<A>  create() {
     std::shared_ptr<A> pp { new A };
     return pp;
}


int main() {

    std::shared_ptr<A> a = create();

    {   // scope 1
    std::cout << "begin of scope 1" << std::endl;
    std::shared_ptr<A> b = a;
         {  // scope 2
         std::cout << "begin of scope 2" << std::endl;
         std::shared_ptr<A> c = a;
         std::cout << "end of scope 2" << std::endl;
         }
    std::cout << "end of scope 1" << std::endl;
    }

    return 0;
}
