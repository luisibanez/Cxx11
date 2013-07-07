#include<thread>
#include<iostream>

  void f() { std::cout << "Hello" << std::endl; }

  struct F {
    void operator()() { std::cout << "World" << std::endl; }
  };

  int main()
  {
    std::thread t1{f};  // f() executes in separate thread
    std::thread t2{F()};  // F()() executes in separate thread
  }
