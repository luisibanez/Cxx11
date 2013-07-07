
#include <string>
#include <algorithm>
#include <map>
#include <iostream>


class Greater_than {
public:
    Greater_than( int v ) : val ( v ) {}
    bool operator()( const std::pair< std::string, int > & p ) { return p.second < 42; }
private:
    int val;
};


int main() {


    std::map< std::string, int > mm {
       { "john",42 },
       { "ringo",41 },
       { "paul",43 }
    };


    Greater_than pp(42);


    int cc  = std::count_if( mm.begin(), mm.end(), pp );

    int dd = std::count_if( mm.begin(), mm.end(), [](const std::pair< std::string, int > & p) { return p.second < 42; } );

    std::cout << "Count = " << cc << std::endl;
    std::cout << "Count = " << dd << std::endl;

    return 0;
}
