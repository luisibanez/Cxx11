
#include <vector>
#include <stdexcept>
#include <iostream>

class Negative_size : public std::exception {

};



template <typename T>
class Vector  {
public:
   Vector(int s);
   ~Vector();

   const T & operator[](int i) const;
   T & operator[](int i);
   int size() const;

   T * begin();
   T * end();

   const T * begin() const;
   const T * end() const;

private:
   T * elem;
   int sz;
};


template<typename T>
Vector<T>::Vector(int s) {
   if(s < 0 ) throw Negative_size {};
   elem = new T[s];
   sz = s;
}


template<typename T>
Vector<T>::~Vector() {
    delete [] elem;
    elem = nullptr;
    sz = 0;
}


template<typename T>
const T &
Vector<T>::operator[](int i) const {
   if( i < 0 ) throw Negative_size {};
   return elem[i];
}


template<typename T>
T & 
Vector<T>::operator[](int i) {
   if( i < 0 ) throw Negative_size {};
   return elem[i];
}




template<typename T>
T *
Vector<T>::begin() {
  return &elem[0];
}


template<typename T>
T *
Vector<T>::end() {
  return this->begin() + sz;
}

template<typename T>
const T *
Vector<T>::begin() const {
  return &elem[0];
}

template<typename T>
const T *
Vector<T>::end() const {
   return this->begin() + sz;
}

template<typename T>
T * begin( Vector<T> & v ) {
   return &v[0];
}


template<typename T>
T * end( Vector<T> & v ) {
   return begin(v)+v.size();
}

template<typename T>
const T * begin( const Vector<T> & v ) {
   return &v[0];
}

template<typename T>
const T * end( const Vector<T> & v ) {
   return begin(v) + v.size();
}

template< typename Container, typename Value >
Value sum( const Container & c, Value v ) {
   for( auto x : c )  {
     v += x;
   }
   return v;
}

int main() {


   Vector<int> v(10);


   for(int i=0; i<10; ++i ) {
      v[i] = i;
      std::cout << v[i] << std::endl;
      }

   for( auto x : v ) {
      std::cout << x << std::endl;
   }

   std::cout << "Sum = " << sum( v, 0 ) << std::endl;

   return 0;
}
