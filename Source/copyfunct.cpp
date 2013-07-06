#include <iostream>

void copy_array() {

   int v1[5] = { 2, 4, 6, 8, 10 };
   int v2[5];

   for( auto i=0; i!=5; ++i ) {
      v2[i] = v1[i];
   }

}

int main() {

    copy_array();


    int v[] = { 1,2,3,4,5,6,7,8,9};

    for( auto &y:v ) {
       ++y;
    }

    for( auto x:v ) {
       std::cout << x << std::endl;
    }

    for( auto x : {"one","two","three","four"} ) {
       std::cout << x << std::endl;
    }

    return 0;
}
