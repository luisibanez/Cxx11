
#include <thread>
#include <chrono>
#include <iostream>

int main() {


  auto t1 = std::chrono::high_resolution_clock::now();

  using milliseconds = std::chrono::milliseconds;

  milliseconds duration( 2000 );

  std::this_thread::sleep_for( duration );

  auto t2 = std::chrono::high_resolution_clock::now();


  auto interval = std::chrono::duration_cast< milliseconds>( t2 - t1 ).count();

  std::cout << "duration = " << interval << " msec " << std::endl;

  return 0;
}
