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
     std::cout << "Create shared count = " << pp.use_count() << std::endl;
     return pp;
}


int main() {

    std::shared_ptr<A> a = create();
     std::cout << "shared count = " << a.use_count() << std::endl;

    {   // scope 1
    std::cout << "begin of scope 1" << std::endl;
    std::shared_ptr<A> b = a;
    std::cout << "shared count = " << b.use_count() << std::endl;
         {  // scope 2
         std::cout << "begin of scope 2" << std::endl;
         std::shared_ptr<A> c = a;
         std::cout << "shared count = " << c.use_count() << std::endl;
         std::cout << "end of scope 2" << std::endl;
         }
    std::cout << "shared count = " << b.use_count() << std::endl;
    std::cout << "end of scope 1" << std::endl;
    }
    std::cout << "shared count = " << a.use_count() << std::endl;

    return 0;
}
