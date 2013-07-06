#include <iostream>
#include <memory>

class Button {

public:

  Button() {
    std::cout << "Constructor" << std::endl;
    }

  ~Button() {
    std::cout << "Destructor" << std::endl;
    }

private:
  double x;
};

std::unique_ptr<Button> build() {
  std::unique_ptr<Button> pp { new Button };
  return pp;
  }

int main() {

  std::unique_ptr<Button> tt;

  {
    std::cout << "before creation" << std::endl;
    std::unique_ptr<Button> button = build();
    std::cout << "after creation" << std::endl;
  }

  std::cout << "ready to exit main" << std::endl;

  return 0;
}
