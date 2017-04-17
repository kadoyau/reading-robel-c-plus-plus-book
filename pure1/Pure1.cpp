#include "InputStream.h"
#include <iostream>

int main(){
  // Stream stream;

  // stream.Set();

  // std::cout<< stream.Get() << std::endl;

  InputStream istream;

  std::cout << "> " << std::flush;
  istream.Set();
  std::cout << istream.Get() << std::endl;
}

