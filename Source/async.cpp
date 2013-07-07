#include <future>
#include <algorithm>
#include <iostream>

double accum(const double * beg, const double * end, double init) {
  return std::accumulate(beg, end, init);
}

double comp4( std::vector<double> & v)
{
  auto v0 = &v[0];
  auto sz = v.size();

  auto f0 = std::async( accum, v0+0*sz/4, v0+1*sz/4, 0 );
  auto f1 = std::async( accum, v0+1*sz/4, v0+2*sz/4, 0 );
  auto f2 = std::async( accum, v0+2*sz/4, v0+3*sz/4, 0 );
  auto f3 = std::async( accum, v0+3*sz/4, v0+4*sz/4, 0 );

  return f0.get() + f1.get() + f2.get() + f3.get();
}

int main() {

  std::vector<double> vv;

  for( int i=0; i<1000000; ++i ) {
    vv.push_back(i);
    }

  std::cout << "vv size = " << vv.size() << std::endl;

  try
    {
    const double sum = comp4(vv);
    std::cout << "Sum = " << sum << std::endl;
  }
  catch( std::exception & excp ) {
    std::cerr << excp.what() << std::endl;
  }

  return 0;
}
