#include <thread>
#include <iostream>
#include <future>
#include <algorithm>


double accum(const double * beg, const double * end, double init) {
  return std::accumulate(beg, end, init);
}

double comp2( const std::vector<double> & v ) {

  using Task_type = double(double *, double *, double * );

  std::packaged_task<Task_type> pt0 { accum };
  std::packaged_task<Task_type> pt1 { accum };

  std::future<double> f0 { pt0.get_future() };
  std::future<double> f1 { pt1.get_future() };

  const double * first = &v[0];

  std::thread t1 { std::move(pt0), first, first+v.size()/2, 0 };
  std::thread t2 { std::move(pt1), first+v.size()/2, first+v.size(), 0 };

  return f0.get() + f1.get();

}

int main() {

  std::vector<double> vv;

  for( int i=0; i<1000000; ++i ) {
    vv[i] = i;
    }

  const double sum = comp2(vv);

  std::cout << "sum = " << sum << std::endl;

  return 0;

}
